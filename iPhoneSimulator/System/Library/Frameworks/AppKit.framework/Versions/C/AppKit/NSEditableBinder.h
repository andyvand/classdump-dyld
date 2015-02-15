/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@interface NSEditableBinder : NSBinder {

	struct {
		unsigned _objectSupportsEditable : 1;
		unsigned _referenceBinderRequestedEditableState : 1;
		unsigned _referenceBinderDidRequestEditableState : 1;
		unsigned _numberOfEditableBindings : 4;
		unsigned _objectSupportsEnabled : 1;
		unsigned _referenceBinderRequestedEnabledState : 1;
		unsigned _referenceBinderDidRequestEnabledState : 1;
		unsigned _numberOfEnabledBindings : 4;
		unsigned _objectSupportsHidden : 1;
		unsigned _referenceBinderRequestedHiddenState : 1;
		unsigned _referenceBinderDidRequestHiddenState : 1;
		unsigned _numberOfHiddenBindings : 4;
		unsigned _reservedEditableBinder : 11;
	}  _editableBinderFlags;

}
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)_pluginProtocol;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
+(id)_enumeratedEditableBindings:(unsigned long long)arg1 ;
+(id)_enumeratedEnabledBindings:(unsigned long long)arg1 ;
+(id)_enumeratedHiddenBindings:(unsigned long long)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(char)isBindingReadOnly:(id)arg1 ;
-(void)removeBinding:(id)arg1 ;
-(id)availableBindings;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(void)_setObject:(id)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)_isBooleanBinding:(id)arg1 ;
-(void)addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformer:(id)arg4 options:(id)arg5 ;
-(void)_clearDependenciesWithAllPeerBinders;
-(void)_synchronizeWithPeerBindersInArray:(id)arg1 ;
-(char)shouldProcessObservations;
-(void)_countBindings;
-(char)editableState;
-(char)editableStateAtIndex:(unsigned long long)arg1 ;
-(char)editableStateAtIndexPath:(id)arg1 ;
-(char)enabledState;
-(char)enabledStateAtIndex:(unsigned long long)arg1 ;
-(char)enabledStateAtIndexPath:(id)arg1 ;
-(char)hiddenState;
-(char)hiddenStateAtIndex:(unsigned long long)arg1 ;
-(char)hiddenStateAtIndexPath:(id)arg1 ;
-(char)_editableStateWithMode:(_NSKeyValueCodingControllerModeType)arg1 ;
-(char)_enabledStateWithMode:(_NSKeyValueCodingControllerModeType)arg1 ;
-(char)_hiddenStateWithMode:(_NSKeyValueCodingControllerModeType)arg1 ;
-(void)_setStatesImmediatelyInObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 triggerRedisplay:(char)arg3 ;
-(void)_requestEditableState:(char)arg1 ;
-(void)_requestAnyEditableState;
-(void)_requestEnabledState:(char)arg1 ;
-(void)_requestAnyEnabledState;
-(void)_requestHiddenState:(char)arg1 ;
-(void)_requestAnyHiddenState;
@end

