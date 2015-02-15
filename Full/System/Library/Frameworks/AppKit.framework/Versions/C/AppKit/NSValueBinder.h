/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSEditorBinder.h>

@class NSString;

@interface NSValueBinder : NSEditorBinder {

	struct {
		unsigned _allowsEditingMultipleValuesSelection : 1;
		unsigned _continuouslyUpdatesValue : 1;
		unsigned _createsSortDescriptor : 1;
		unsigned _isEditing : 1;
		unsigned _useFormattedValue : 1;
		unsigned _ignoreShowValue : 1;
		unsigned _commitOrDiscardEditingInProgress : 1;
		unsigned _hasUncommittedChanges : 1;
		unsigned _revertBackToOriginalValue : 1;
		unsigned _applyObjectValueInProgress : 1;
		unsigned _disardEditingSheetInProgress : 1;
		unsigned _reservedValueBinder : 21;
	}  _valueBinderFlags;
	id _cachedObjectValue;
	id _cachedDisplayValue;
	id _sortDescriptorPrototype;
	NSString* _referenceBinding;

}
+(id)_pluginProtocol;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(void)_connectionWasEstablished;
-(char)isBindingReadOnly:(id)arg1 ;
-(char)canApplyValueTransformer:(id)arg1 toBinding:(id)arg2 ;
-(id)availableBindings;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)commitEditing;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(char)selectionSupportsEnabledState;
-(id)_referenceBinding;
-(void)performAction:(id)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)_dealloc;
-(void)discardEditing;
-(oneway void)releaseConnectionWithSynchronizePeerBinders:(char)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)_isBooleanBinding:(id)arg1 ;
-(char)isEditing;
-(void)_connectionWasBroken;
-(char)commitEditingAndReturnError:(id*)arg1 ;
-(id)updateInvalidatedObjectValue:(id)arg1 forObject:(id)arg2 ;
-(char)handleValidationError:(id)arg1 description:(id)arg2 inEditor:(id)arg3 errorUserInterfaceHandled:(char*)arg4 ;
-(char)_isReferenceBinding:(id)arg1 ;
-(char)_isExplicitlyNonEditable;
-(char)validateAndCommitValueInEditor:(id)arg1 editingIsEnding:(char)arg2 errorUserInterfaceHandled:(char*)arg3 ;
-(void)editorDidBeginEditing:(id)arg1 ;
-(void)editorDidEndEditing:(id)arg1 ;
-(void)updateOutlineColumnOutlineCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)showValue:(id)arg1 inObject:(id)arg2 ;
-(void)_revertDisplayValueBackToOriginalValue:(void*)arg1 ;
-(char)_valueClassIsSortableWithBinding:(id)arg1 ;
-(id)_defaultSortDescriptorPrototypeKey;
-(void)_adjustObject:(id)arg1 mode:(_NSKeyValueCodingControllerModeType)arg2 observedController:(id)arg3 observedKeyPath:(id)arg4 context:(void*)arg5 editableState:(char*)arg6 adjustState:(char*)arg7 ;
-(char)supportsTableEditing;
-(id)defaultSortDescriptorPrototypeForTableColumn:(id)arg1 ;
-(id)_cachedObjectValue;
-(id)_referenceBindingValueAtIndex:(unsigned long long)arg1 ;
-(id)_referenceBindingValueAtIndexPath:(id)arg1 ;
-(void)_startChanging;
-(void)_endChanging;
-(void)setAllowsEditingMultipleValuesSelection:(char)arg1 ;
-(void)setContinuouslyUpdatesValue:(char)arg1 ;
-(void)setCreatesSortDescriptor:(char)arg1 ;
-(char)allowsEditingMultipleValuesSelection;
-(char)continuouslyUpdatesValue;
-(char)createsSortDescriptor;
-(char)_supportsMinAndMax;
-(Class)_valueClass;
-(id)_cachedDisplayValue;
-(id)shownValueInObject:(id)arg1 errorEncountered:(char*)arg2 error:(id*)arg3 ;
-(char)_cachedValuesAreValid;
-(id)objectValueForDisplayValue:(id)arg1 ;
-(id)validateObjectValue:(id)arg1 ;
-(id)_referenceBindingValue;
-(char)objectValueSupportsEnabledState:(id)arg1 ;
-(void)_cacheObjectValue:(id)arg1 ;
-(id)displayValueForObjectValue:(id)arg1 ;
-(char)_shouldAlwaysUpdateDisplayValue;
-(void)_cacheDisplayValue:(id)arg1 ;
-(void)_presentDiscardEditingSheetWithError:(id)arg1 discardEditingCallback:(SEL)arg2 otherCallback:(SEL)arg3 callbackContextInfo:(void*)arg4 relatedToBinding:(id)arg5 ;
-(char)_presentDiscardEditingAlertPanelWithError:(id)arg1 relatedToBinding:(id)arg2 ;
-(int)_handleApplyValueError:(id)arg1 forBinding:(id)arg2 canRecoverFromErrors:(char)arg3 handleErrors:(char)arg4 typeOfAlert:(char)arg5 discardEditingCallback:(SEL)arg6 otherCallback:(SEL)arg7 callbackContextInfo:(void*)arg8 didRunAlert:(char*)arg9 ;
-(char)_handleApplyValueResult:(int)arg1 cachedValue:(id)arg2 displayValue:(id)arg3 objectValue:(id)arg4 ;
-(int)_applyObjectValue:(id*)arg1 forBinding:(id)arg2 canRecoverFromErrors:(char)arg3 handleErrors:(char)arg4 typeOfAlert:(char)arg5 discardEditingCallback:(SEL)arg6 otherCallback:(SEL)arg7 callbackContextInfo:(void*)arg8 didRunAlert:(char*)arg9 ;
-(char)applyDisplayedValueHandleErrors:(char)arg1 typeOfAlert:(char)arg2 canRecoverFromErrors:(char)arg3 discardEditingCallback:(SEL)arg4 otherCallback:(SEL)arg5 callbackContextInfo:(void*)arg6 didRunAlert:(char*)arg7 error:(id*)arg8 ;
-(char)_applyDisplayedValueIfHasUncommittedChangesWithHandleErrors:(char)arg1 typeOfAlert:(char)arg2 discardEditingCallback:(SEL)arg3 otherCallback:(SEL)arg4 callbackContextInfo:(void*)arg5 didRunAlert:(char*)arg6 error:(id*)arg7 ;
-(void)_commitEditingDiscardEditingCallback:(SCD_Struct_NS92*)arg1 ;
-(void)_commitEditingOtherCallback:(SCD_Struct_NS92*)arg1 ;
-(id)_validateDisplayValue;
-(void)_discardValidateAndCommitValue:(void*)arg1 ;
-(void)_didPresentDiscardEditingSheetWithRecovery:(char)arg1 contextInfo:(SCD_Struct_NS93*)arg2 ;
-(id)_formatter;
@end

