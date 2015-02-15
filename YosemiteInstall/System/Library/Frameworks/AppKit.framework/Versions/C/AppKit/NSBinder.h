/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSMutableArray;

@interface NSBinder : NSObject <NSCoding> {

	id _object;
	NSMutableArray* _bindingInfos;
	struct {
		unsigned _isConnected : 1;
		unsigned _hasPerformedObservationRegistration : 1;
		unsigned _isObserving : 1;
		unsigned _suspendObservationProcessing : 1;
		unsigned _needsRefreshWhenObserverationProcessingResumes : 1;
		unsigned _reservedBinder : 27;
	}  _binderFlags;
	unsigned long long _bindingsBoundMask;
	id _plugin;
	id _expectedObservingInfo;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)_deprecatedBindings;
+(id)_enumeratedBindings:(id)arg1 storage:(id*)arg2 number:(unsigned long long)arg3 numberFirstBinding:(char)arg4 maxNumber:(unsigned long long)arg5 ;
+(id)_pluginProtocol;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
+(void)load;
+(id)binderClassesSuperseded;
+(id)_prepareAlertError:(id)arg1 responder:(id*)arg2 responderCandidate:(id)arg3 window:(id*)arg4 recoveryAttempter:(id)arg5 ;
+(void)_didPresentModalAlert:(char)arg1 contextInfo:(SCD_Struct_NS15*)arg2 ;
+(CFArrayRef)_allBinderClasses;
+(Class)_pluginClassWithObject:(id)arg1 ;
+(void)_presentAlertPanelForError:(id)arg1 responder:(id)arg2 responderCandidate:(id)arg3 ;
+(void)_presentSheetForError:(id)arg1 responder:(id)arg2 responderCandidate:(id)arg3 delegate:(id)arg4 callback:(SEL)arg5 callbackContextInfo:(void*)arg6 ;
+(id)binderClassesForObject:(id)arg1 ;
+(char)_autoCreateBinderForObject:(id)arg1 withController:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_init;
-(void)_copyDetailsFromBinder:(id)arg1 ;
-(id)_bindingInfos;
-(void)_connectionWasEstablished;
-(id)_bindingInfoForBinding:(id)arg1 ;
-(char)isBindingReadOnly:(id)arg1 ;
-(char)bindingRunsAlerts:(id)arg1 ;
-(char)canApplyValueTransformer:(id)arg1 toBinding:(id)arg2 ;
-(void)removeBinding:(id)arg1 ;
-(id)availableBindings;
-(void)_removeBinding:(id)arg1 byReplacingWithRemainingBindingsInArray:(id)arg2 ;
-(void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3 ;
-(id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(char)arg2 ;
-(char)isConnected;
-(id)object;
-(char)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 error:(id*)arg4 ;
-(id)valueForBinding:(id)arg1 resolveMarkersToPlaceholders:(char)arg2 ;
-(id)valueForBinding:(id)arg1 atIndex:(unsigned long long)arg2 resolveMarkersToPlaceholders:(char)arg3 ;
-(id)valueForBinding:(id)arg1 atIndexPath:(id)arg2 resolveMarkersToPlaceholders:(char)arg3 ;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)commitEditing;
-(char)alwaysPresentsApplicationModalAlertsWithBinding:(id)arg1 ;
-(void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2 ;
-(id)_referenceBinding;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)_dealloc;
-(void)discardEditing;
-(id)resolveMarkerToPlaceholder:(id)arg1 binding:(id)arg2 ;
-(id)mutableArrayValueForBinding:(id)arg1 resolveMarkersToPlaceholders:(char)arg2 ;
-(id)mutableSetValueForBinding:(id)arg1 resolveMarkersToPlaceholders:(char)arg2 ;
-(void)_setObject:(id)arg1 ;
-(id)_initWithObjectNoExceptions:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)_updatePlaceholdersForBindingInfo:(id)arg1 ;
-(oneway void)releaseConnectionWithSynchronizePeerBinders:(char)arg1 ;
-(char)canAddBinding:(id)arg1 toController:(id)arg2 ;
-(void)_setOptions:(id)arg1 withBindingInfo:(id)arg2 ;
-(char)isBindingKeyless:(id)arg1 ;
-(char)isBindingKeyOptional:(id)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(char)_isBooleanBinding:(id)arg1 ;
-(void)addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformer:(id)arg4 options:(id)arg5 ;
-(unsigned long long)_bindingInfoIndexForBinding:(id)arg1 ;
-(void)_removeBinding:(id)arg1 ;
-(void)_addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformerName:(id)arg4 options:(id)arg5 ;
-(char)_observeKeyPathForBindingInfo:(id)arg1 registerOrUnregister:(char)arg2 ;
-(id)controllerForBinding:(id)arg1 ;
-(void)_clearDependenciesWithAllPeerBinders;
-(void)_synchronizeWithPeerBindersInArray:(id)arg1 ;
-(char)shouldProcessObservations;
-(void)_performConnectionEstablishedRefresh;
-(void)_suspendObservationNotificationProcessing;
-(id)deprecatedBindings;
-(void)_updateDependenciesWithPeerBinders:(id)arg1 ;
-(char)_handleObservingRefresh;
-(void)_updateObservingRegistration:(char)arg1 ;
-(char)isEditing;
-(void)_cleanUpConnectionWithSynchronizePeerBinders:(char)arg1 ;
-(void)_connectionWasBroken;
-(id)_applyValueTransformerToValue:(id)arg1 forBindingInfo:(id)arg2 reverse:(char)arg3 ;
-(id)_resolveMarkerToPlaceholder:(id)arg1 forBindingInfo:(id)arg2 allowPluginOverride:(char)arg3 ;
-(id)_valueForKeyPath:(id)arg1 ofObject:(id)arg2 mode:(_NSKeyValueCodingControllerModeType)arg3 raisesForNotApplicableKeys:(char)arg4 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObject:(id)arg2 atIndex:(unsigned long long)arg3 raisesForNotApplicableKeys:(char)arg4 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObject:(id)arg2 atIndex:(unsigned long long)arg3 raisesForNotApplicableKeys:(char)arg4 ;
-(char)_setValue:(id*)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3 mode:(_NSKeyValueCodingControllerModeType)arg4 validateImmediately:(char)arg5 raisesForNotApplicableKeys:(char)arg6 error:(id*)arg7 ;
-(void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObject:(id)arg4 mode:(_NSKeyValueCodingControllerModeType)arg5 raisesForNotApplicableKeys:(char)arg6 ;
-(char)_observationProcessingEnabled;
-(id)copyToObject:(id)arg1 ;
-(id)_plugin;
-(char)_testBinderConfiguration:(id)arg1 repairBindings:(char)arg2 ;
-(void)_setOptions:(id)arg1 forBinding:(id)arg2 ;
-(id)keyPathForBinding:(id)arg1 ;
-(id)valueTransformerForBinding:(id)arg1 ;
-(id)_valueTransformerNameForBinding:(id)arg1 ;
-(void)_setController:(id)arg1 forBinding:(id)arg2 ;
-(void)setPlaceholder:(id)arg1 forMarker:(id)arg2 withBinding:(id)arg3 ;
-(id)placeholderForMarker:(id)arg1 withBinding:(id)arg2 ;
-(void)setRaisesForNotApplicableKeys:(char)arg1 withBinding:(id)arg2 ;
-(char)raisesForNotApplicableKeysWithBinding:(id)arg1 ;
-(void)setValidatesImmediately:(char)arg1 withBinding:(id)arg2 ;
-(char)validatesImmediatelyWithBinding:(id)arg1 ;
-(void)setAlwaysPresentsApplicationModalAlerts:(char)arg1 withBinding:(id)arg2 ;
-(char)_isBindingEstablished:(id)arg1 ;
-(char)_isAnyBindingInMaskBound:(unsigned long long)arg1 ;
-(char)_isKeyPathBound:(id)arg1 ;
-(char)_observeKeyPathForRelatedBinder:(id)arg1 registerOrUnregister:(char)arg2 ;
-(id)_referenceBinderController;
-(void)_resumeObservationNotificationProcessing;
-(void)establishConnection;
-(void)breakConnection;
-(void)_prepareIndirectKeyValueCodingCallWithPartialControllerKey:(id)arg1 controller:(id)arg2 ;
-(id)applyValueTransformerToValue:(id)arg1 forBinding:(id)arg2 reverse:(char)arg3 ;
-(char)setValue:(id*)arg1 forBinding:(id)arg2 error:(id*)arg3 ;
-(char)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 atIndexPath:(id)arg4 error:(id*)arg5 ;
-(char)setValue:(id*)arg1 forBinding:(id)arg2 atIndexPath:(id)arg3 error:(id*)arg4 ;
-(id)mutableArrayValueForBinding:(id)arg1 atIndex:(unsigned long long)arg2 resolveMarkersToPlaceholders:(char)arg3 ;
-(id)mutableSetValueForBinding:(id)arg1 atIndex:(unsigned long long)arg2 resolveMarkersToPlaceholders:(char)arg3 ;
-(char)setValue:(id*)arg1 forBinding:(id)arg2 atIndex:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 atIndex:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)commitEditingAndReturnError:(id*)arg1 ;
-(void)_presentModalAlertWithError:(id)arg1 responder:(id)arg2 relatedToBinding:(id)arg3 ;
-(void)_logError:(id)arg1 fallbackMessage:(id)arg2 relatedToBinding:(id)arg3 ;
-(char)_isAutoCreated;
-(void)_markAutoCreated:(char)arg1 ;
-(void)_noticeEditablePeerBinder:(id)arg1 ;
-(void)updateOutlineColumnOutlineCell:(id)arg1 forDisplayAtIndexPath:(id)arg2 ;
-(char)supportsTableEditing;
-(void)_noticeTextColorPeerBinder:(id)arg1 ;
@end
