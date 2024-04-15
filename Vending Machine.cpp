///////////////////////////////////////////////////////////
//  Vending Machine.cpp
//  Implementation of the Class Vending Machine
//  Created on:      21-Mar-2024 9:39:24 am
//  Original author: sdl16
///////////////////////////////////////////////////////////

#include "Vending Machine.h"

using namespace std;



void Vending Machine::dispense(int idx){
	count[idx]--;
}


int Vending Machine::selectItem(){
	int k;
	cout << "Enter the index of the item you want to buy: ";
    cin >> k;
	return k;
}


void Vending Machine::takeCoins(int idx){
	int coins = price[idx];
	int k;
	cin>>k;
}


/* Begin - EA generated code for StateMachine */








VendingMachine::VendingMachine()
{
	m_StateMachineImpl = NULL;
}

VendingMachine::VendingMachine(ContextManager* pManager, String sInstanceName)
{
	//Initialize Region Variables
	m_statemachinea = NOSTATE;
    m_sInstanceName = sInstanceName;
    m_sType = "Vending Machine";
	m_StateMachineImpl = new StateMachineImpl(this, pManager);
}

VendingMachine::~VendingMachine()
{
	if (m_StateMachineImpl)
	{
		delete m_StateMachineImpl;
	}
}

bool VendingMachine::defer(Event* event, StateData* toState)
{
	bool bDefer = false;
		
	if(!bDefer)
	{
		if(toState->parent_state)
		{
			bDefer = defer(event, toState->parent_state);
		}
	}
	return bDefer;
}


void VendingMachine::TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	switch (transition) {
		case VendingMachine_ENUM_READY__TO__IDLE_22:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_Ready__TO__Idle_22", "{0177E375-9FBA-4983-9ACA-CEC82CE540B1}", m_sInstanceName);
			Ready__TO__Idle_22(signal, submachineState); 
			break;

		case VendingMachine_ENUM_INITIAL_22__TO__IDLE_8:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_Initial_22__TO__Idle_8", "{1D9CA3A1-3F01-4aa4-BDCB-9EA7EA887CE7}", m_sInstanceName);
			Initial_22__TO__Idle_8(signal, submachineState); 
			break;

		case VendingMachine_ENUM_SELECTITEM__TO__TAKECOINS_16:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_SelectItem__TO__TakeCoins_16", "{28543720-C54E-4e69-B86F-9F4B7FBEA4C5}", m_sInstanceName);
			SelectItem__TO__TakeCoins_16(signal, submachineState); 
			break;

		case VendingMachine_ENUM_INSUFFICIENTFUNDS__TO__TAKECOINS_19:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_InsufficientFunds__TO__TakeCoins_19", "{32468B13-91DF-4ebd-AF74-E0D0D8DD6844}", m_sInstanceName);
			InsufficientFunds__TO__TakeCoins_19(signal, submachineState); 
			break;

		case VendingMachine_ENUM_READY__TO__SELECTITEM_14:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_Ready__TO__SelectItem_14", "{32B2C32A-3530-4569-A143-CCF71AC158F0}", m_sInstanceName);
			Ready__TO__SelectItem_14(signal, submachineState); 
			break;

		case VendingMachine_ENUM_TAKECOINS__TO__INSUFFICIENTFUNDS_18:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_TakeCoins__TO__InsufficientFunds_18", "{405E81B9-433D-4d1d-B8A1-0277C54E206E}", m_sInstanceName);
			TakeCoins__TO__InsufficientFunds_18(signal, submachineState); 
			break;

		case VendingMachine_ENUM_DISPENSING__TO__READY_21:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_Dispensing__TO__Ready_21", "{5381809C-FCFA-4ad6-A3FC-1063C945AB27}", m_sInstanceName);
			Dispensing__TO__Ready_21(signal, submachineState); 
			break;

		case VendingMachine_ENUM_TAKECOINS__TO__DISPENSING_20:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_TakeCoins__TO__Dispensing_20", "{5BCD91B2-978D-4b34-8346-538223A55A87}", m_sInstanceName);
			TakeCoins__TO__Dispensing_20(signal, submachineState); 
			break;

		case VendingMachine_ENUM_SELECTITEM__TO__OUTOFSTOCKS_15:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_SelectItem__TO__OutofStocks_15", "{6DB7E911-0C24-4174-9D6B-FA96790FA898}", m_sInstanceName);
			SelectItem__TO__OutofStocks_15(signal, submachineState); 
			break;

		case VendingMachine_ENUM_OUTOFSTOCKS__TO__READY_17:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_OutofStocks__TO__Ready_17", "{CFC1817D-CAA7-4ff7-96FE-CB89FCA22CFE}", m_sInstanceName);
			OutofStocks__TO__Ready_17(signal, submachineState); 
			break;

		case VendingMachine_ENUM_IDLE__TO__READY_13:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "VendingMachine_Idle__TO__Ready_13", "{D896B0C9-DE6E-4ca8-9F66-E9FB9AEC4749}", m_sInstanceName);
			Idle__TO__Ready_13(signal, submachineState); 
			break;
	}
	m_StateMachineImpl->currentTransition.SetTransition(NOTRANSITION, NULL, "NOTRANSITION", "", "");
}

void VendingMachine::Ready__TO__Idle_22_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Ready__TO__Idle_22 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::Ready__TO__Idle_22(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_READY)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_READY, submachineState, EXIT, 0);
	Ready__TO__Idle_22_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_IDLE, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::Initial_22__TO__Idle_8_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_22__TO__Idle_8 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::Initial_22__TO__Idle_8(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(submachineState)
		submachineState->IncrementActiveCount();
	Initial_22__TO__Idle_8_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_IDLE, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::SelectItem__TO__TakeCoins_16_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "SelectItem__TO__TakeCoins_16 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::SelectItem__TO__TakeCoins_16(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_SELECTITEM)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_SELECTITEM, submachineState, EXIT, 0);
	SelectItem__TO__TakeCoins_16_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_TAKECOINS, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::InsufficientFunds__TO__TakeCoins_19_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "InsufficientFunds__TO__TakeCoins_19 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::InsufficientFunds__TO__TakeCoins_19(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS, submachineState, EXIT, 0);
	InsufficientFunds__TO__TakeCoins_19_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_TAKECOINS, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::Ready__TO__SelectItem_14_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Ready__TO__SelectItem_14 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::Ready__TO__SelectItem_14(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_READY)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_READY, submachineState, EXIT, 0);
	Ready__TO__SelectItem_14_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_SELECTITEM, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::TakeCoins__TO__InsufficientFunds_18_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "TakeCoins__TO__InsufficientFunds_18 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::TakeCoins__TO__InsufficientFunds_18(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_TAKECOINS)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_TAKECOINS, submachineState, EXIT, 0);
	TakeCoins__TO__InsufficientFunds_18_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::Dispensing__TO__Ready_21_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Dispensing__TO__Ready_21 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::Dispensing__TO__Ready_21(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_DISPENSING)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_DISPENSING, submachineState, EXIT, 0);
	Dispensing__TO__Ready_21_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_READY, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::TakeCoins__TO__Dispensing_20_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "TakeCoins__TO__Dispensing_20 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::TakeCoins__TO__Dispensing_20(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_TAKECOINS)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_TAKECOINS, submachineState, EXIT, 0);
	TakeCoins__TO__Dispensing_20_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_DISPENSING, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::SelectItem__TO__OutofStocks_15_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "SelectItem__TO__OutofStocks_15 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::SelectItem__TO__OutofStocks_15(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_SELECTITEM)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_SELECTITEM, submachineState, EXIT, 0);
	SelectItem__TO__OutofStocks_15_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::OutofStocks__TO__Ready_17_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "OutofStocks__TO__Ready_17 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::OutofStocks__TO__Ready_17(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS, submachineState, EXIT, 0);
	OutofStocks__TO__Ready_17_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_READY, submachineState, ENTRY, signal, DefaultEntry);
}

void VendingMachine::Idle__TO__Ready_13_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Idle__TO__Ready_13 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void VendingMachine::Idle__TO__Ready_13(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_IDLE)->IsActiveState())
	{
		return;
	}
	StateProc(VendingMachine_ENUM_STATEMACHINEA_IDLE, submachineState, EXIT, 0);
	Idle__TO__Ready_13_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(VendingMachine_ENUM_STATEMACHINEA_READY, submachineState, ENTRY, signal, DefaultEntry);
}

bool VendingMachine::StateProc(int state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, int entryArray[], int nArrayCount) 
{
	EntryEnum entryEnumArray[MAX_STATES];
	for(int i = 0; i < nArrayCount; i++)
	{
		entryEnumArray[i] = (EntryEnum)entryArray[i];
	}
	
	return StateProc((StateEnum)state, submachineState, behavior, signal, enumEntryType, entryEnumArray, nArrayCount);
}
bool VendingMachine::StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount) 
{
	switch (state) {
		case VendingMachine_ENUM_STATEMACHINEA_DISPENSING:
			return StateMachineA_Dispensing(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS:
			return StateMachineA_InsufficientFunds(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS:
			return StateMachineA_OutofStocks(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_SELECTITEM:
			return StateMachineA_SelectItem(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_TAKECOINS:
			return StateMachineA_TakeCoins(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_IDLE:
			return StateMachineA_Idle(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_READY:
			return StateMachineA_Ready(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case VendingMachine_ENUM_STATEMACHINEA_FINAL_23:
			return StateMachineA_Final_23(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);
	}
	return false;
}

bool VendingMachine::StateMachineA_Dispensing(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_DISPENSING);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_DISPENSING;
			state->IncrementActiveCount();
			StateMachineA_Dispensing_behavior(ENTRY, signal);
			
			StateMachineA_Dispensing_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_Dispensing_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_Dispensing_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_Dispensing " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_Dispensing " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_Dispensing " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_InsufficientFunds(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS;
			state->IncrementActiveCount();
			StateMachineA_InsufficientFunds_behavior(ENTRY, signal);
			
			StateMachineA_InsufficientFunds_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_InsufficientFunds_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_InsufficientFunds_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_InsufficientFunds " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_InsufficientFunds " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_InsufficientFunds " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_OutofStocks(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS;
			state->IncrementActiveCount();
			StateMachineA_OutofStocks_behavior(ENTRY, signal);
			
			StateMachineA_OutofStocks_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_OutofStocks_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_OutofStocks_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_OutofStocks " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_OutofStocks " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_OutofStocks " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_SelectItem(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_SELECTITEM);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_SELECTITEM;
			state->IncrementActiveCount();
			StateMachineA_SelectItem_behavior(ENTRY, signal);
			
			StateMachineA_SelectItem_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_SelectItem_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_SelectItem_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_SelectItem " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_SelectItem " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_SelectItem " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_TakeCoins(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_TAKECOINS);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_TAKECOINS;
			state->IncrementActiveCount();
			StateMachineA_TakeCoins_behavior(ENTRY, signal);
			
			StateMachineA_TakeCoins_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_TakeCoins_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_TakeCoins_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_TakeCoins " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_TakeCoins " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_TakeCoins " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_Idle(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_IDLE);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_IDLE;
			state->IncrementActiveCount();
			StateMachineA_Idle_behavior(ENTRY, signal);
			
			StateMachineA_Idle_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_Idle_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_Idle_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_Idle " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_Idle " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_Idle " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_Ready(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, VendingMachine_ENUM_STATEMACHINEA_READY);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_statemachinea = VendingMachine_ENUM_STATEMACHINEA_READY;
			state->IncrementActiveCount();
			StateMachineA_Ready_behavior(ENTRY, signal);
			
			StateMachineA_Ready_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_statemachinea = NOSTATE;
			state->DecrementActiveCount();
			StateMachineA_Ready_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_Ready_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "StateMachineA_Ready " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "StateMachineA_Ready " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "StateMachineA_Ready " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool VendingMachine::StateMachineA_Final_23(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	
	if(submachineState)
		submachineState->DecrementActiveCount();
	if(submachineState->IsActiveState())
		m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
	
	return true;
}


bool VendingMachine::dispatch(Event* event, StateData* toState, bool bCheckOnly) 
{
	if (!m_StateMachineImpl)
		return false;
	
	bool bDispatched = false;
	
	if(!toState || !toState->IsActiveState() && !bCheckOnly)
		return bDispatched;
	
	switch (toState->state_enum) {
		case VendingMachine_VIRTUAL_SUBMACHINESTATE:
			if(event->eventEnum == COMPLETION)
			{
				if(!bCheckOnly)
				{
					m_StateMachineImpl->ReleaseSubmachineState(toState);
					for (list<StateData*>::iterator it = m_StateMachineImpl->lstStateData.begin(); it != m_StateMachineImpl->lstStateData.end(); )
					{
						StateData* state = *it;
						if (state == toState)
						{
							it = m_StateMachineImpl->lstStateData.erase(it);
							break;
						}
						else
							++it;
					}
					delete toState;
					toState = NULL;
				}				
				bDispatched = true;
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_DISPENSING:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_DISPENSING__TO__READY_21, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_INSUFFICIENTFUNDS__TO__TAKECOINS_19, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_OUTOFSTOCKS__TO__READY_17, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_SELECTITEM:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(count[idx]>0) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_SELECTITEM__TO__TAKECOINS_16, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					if(count[idx]==0) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_SELECTITEM__TO__OUTOFSTOCKS_15, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_TAKECOINS:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(price[idx]<inputCoins) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_TAKECOINS__TO__INSUFFICIENTFUNDS_18, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					if(price[idx]==inputCoins) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_TAKECOINS__TO__DISPENSING_20, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_IDLE:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(ON) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_IDLE__TO__READY_13, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case VendingMachine_ENUM_STATEMACHINEA_READY:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(idleTime>=10 min.) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_READY__TO__IDLE_22, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					if(true) {
						if(!bCheckOnly)
							TransitionProc(VendingMachine_ENUM_READY__TO__SELECTITEM_14, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
	}
	
	if(!bDispatched && toState && toState->parent_state && event->eventEnum != COMPLETION)
	{
		bDispatched = dispatch(event, toState->parent_state, true);
		if(bDispatched && !bCheckOnly)
		{
			/*1. Exit the current state; 2. Decrement the active count of the parent state; 3. dispatch the event to parent state*/
			StateProc((StateEnum)toState->state_enum, toState->submachine_state, EXIT, 0);
			toState->parent_state->DecrementActiveCount();
			dispatch(event, toState->parent_state, false);
			event = 0;
		}
	}
	
	return bDispatched;
}

void VendingMachine::runStateMachine(StateMachineEnum statemachine) 
{
	if (!m_StateMachineImpl)
		return;
	
	list<StateData*> activeStateArray;
	if(m_StateMachineImpl->GetCurrentStates(activeStateArray) > 0)
		return;
	
	switch (statemachine) {
		case VendingMachine_ENUM_STATEMACHINEA:
			{
				const int nArrayCount = 1;
				EntryEnum entryArray[nArrayCount] = {VendingMachine_ENUM_STATEMACHINEA_INITIAL_22};
				runStateMachine(statemachine, NULL, 0, entryArray, nArrayCount);	//submachineState is NULL if run standalone statemachine 
			}
			break;
	}
}

void VendingMachine::runStateMachines()
{
	runStateMachine(VendingMachine_ENUM_STATEMACHINEA);
}

void VendingMachine::runStateMachine(String statemachine)
{
	if(statemachine == "VendingMachine_StateMachineA")
	{
		runStateMachine(VendingMachine_ENUM_STATEMACHINEA);
		return;
	}
}

void VendingMachine::runStateMachine(StateMachineEnum statemachine, StateData* submachineState, Signal* signal, EntryEnum entryArray[], int nEntryCount) 
{
	if(!submachineState)
	{
		StateInitialData initialData(VendingMachine_VIRTUAL_SUBMACHINESTATE, NOSTATE, 1, false, "VendingMachine_VIRTUAL_SUBMACHINESTATE", "", ""); 
		submachineState = new StateData(m_StateMachineImpl, &initialData);
		
		submachineState->IncrementActiveCount();
		m_StateMachineImpl->lstStateData.push_back(submachineState);
	}
	switch (statemachine) {
		case VendingMachine_ENUM_STATEMACHINEA:
			{
				const int nArrayCount = 8;
				StateInitialData initialDataArray[nArrayCount] = 
					{
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_DISPENSING, NOSTATE, 0, false, "VendingMachine_StateMachineA_Dispensing", "{B2FF07EA-C3D2-430f-B539-6D6BF31CF5C2}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_INSUFFICIENTFUNDS, NOSTATE, 0, false, "VendingMachine_StateMachineA_InsufficientFunds", "{C5CE8C0C-0901-4f3b-A347-B1D6E4515B98}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_OUTOFSTOCKS, NOSTATE, 0, false, "VendingMachine_StateMachineA_OutofStocks", "{510D8E23-1AFE-4538-8648-C36307421AAB}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_SELECTITEM, NOSTATE, 0, false, "VendingMachine_StateMachineA_SelectItem", "{51BF8A9E-5728-4800-B303-E62631F8C65A}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_TAKECOINS, NOSTATE, 0, false, "VendingMachine_StateMachineA_TakeCoins", "{AA3EE719-59B0-49e4-9DA1-DD4A3027EB8D}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_IDLE, NOSTATE, 0, false, "VendingMachine_StateMachineA_Idle", "{3AA9B0E0-50DD-42b4-A425-44F1A46C0109}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_READY, NOSTATE, 0, false, "VendingMachine_StateMachineA_Ready", "{66722815-3076-4436-96EB-5060249A1E5E}", m_sInstanceName),
						StateInitialData(VendingMachine_ENUM_STATEMACHINEA_FINAL_23, NOSTATE, 0, false, "VendingMachine_StateMachineA_Final_23", "{715D7A86-4B22-458b-949C-F74BF5D96FF5}", m_sInstanceName)
					};
		
				m_StateMachineImpl->CreateStateObjects(initialDataArray, nArrayCount, submachineState);
			}
			for(int i = 0; i < nEntryCount; i++)
			{
				switch(entryArray[i])
				{
				case VendingMachine_ENUM_STATEMACHINEA_INITIAL_22:
					TransitionProc(VendingMachine_ENUM_INITIAL_22__TO__IDLE_8, signal, submachineState);
					break;
				}
			}
			if(submachineState->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
			break;
	}
}

String VendingMachine::GetInstanceName()
{
	return m_sInstanceName;
}

String VendingMachine::GetTypeName()
{
	return m_sType;
}







/* End - EA generated code for StateMachine */
