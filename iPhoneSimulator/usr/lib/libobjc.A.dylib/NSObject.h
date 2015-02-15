/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libobjc.A.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/libobjc.A.dylib-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(char)respondsToSelector:(SEL)arg1;
-(NSString *)description;
-(Class)class;
-(char)isKindOfClass:(Class)arg1;
-(char)isEqual:(id)arg1;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(char)isProxy;
-(char)isMemberOfClass:(Class)arg1;
-(char)conformsToProtocol:(id)arg1;
-(unsigned long long)retainCount;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;

@end

#import <libobjc.A.dylib/ABCompare.h>

@class NSString, NSArray, NSDictionary, NSClassDescription;

@interface NSObject <NSObject, ABCompare> {

	Class isa;

}

@property (copy,readonly) NSArray * exposedBindings; 
@property (readonly) unsigned classCode; 
@property (copy,readonly) NSString * className; 
@property (copy) NSDictionary * scriptingProperties; 
@property (retain,readonly) id autoContentAccessingProxy; 
@property (readonly) Class classForKeyedArchiver; 
@property (assign) void* observationInfo; 
@property (copy,readonly) NSClassDescription * classDescription; 
@property (copy,readonly) NSArray * attributeKeys; 
@property (copy,readonly) NSArray * toOneRelationshipKeys; 
@property (copy,readonly) NSArray * toManyRelationshipKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)mf_performBlockOnMainThread:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
+(void)_mf_mainThreadPerform:(/*^block*/id)arg1 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)_webkit_invokeOnMainThread;
+(char)brc_swizzleInstanceMethod:(SEL)arg1 with:(SEL)arg2 ;
+(char)brc_swizzleClassMethod:(SEL)arg1 with:(SEL)arg2 ;
+(void)insertAttribute:(id)arg1 intoView:(id)arg2 anchorPosition:(CGPoint*)arg3 forFilter:(id)arg4 settings:(id)arg5 configuration:(id)arg6 objectController:(id)arg7 ;
+(char)animatorShouldPerformSelector:(SEL)arg1 ;
+(void)_kitNewObjectSetVersion:(long long)arg1 ;
+(id)defaultPlaceholderForMarker:(id)arg1 withBinding:(id)arg2 ;
+(void)setDefaultPlaceholder:(id)arg1 forMarker:(id)arg2 withBinding:(id)arg3 ;
+(void)_registerObjectClass:(Class)arg1 placeholder:(id)arg2 binding:(id)arg3 ;
+(void)_registerDefaultPlaceholders;
+(id)_stateMarkerForValue:(id)arg1 ;
+(void)_exposeBinding:(id)arg1 valueClass:(Class)arg2 ;
+(void)_concealBinding:(id)arg1 ;
+(id)_guaranteeStorageInDictionary:(id)arg1 addBinding:(id)arg2 ;
+(void)exposeBinding:(id)arg1 ;
+(id)_exposedBindings;
+(void)_setBindingCreationDelegate:(id)arg1 ;
+(id)_bindingCreationDelegate;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(id)CA_CAMLPropertyForKey:(id)arg1 ;
+(id)replacementObjectForPortCoder:(id)arg1 ;
+(void)flushAllKeyBindings;
+(void)flushClassKeyBindings;
+(SEL)_selectorToGetValueWithNameForKey:(id)arg1 ;
+(SEL)_selectorToGetValueWithUniqueIDForKey:(id)arg1 ;
+(id)_scriptingValueOfOneOfAlternativeTypes:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingEnumeratorOfType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingValueOfComplexType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingValueOfObjectType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)_scriptingValueOfValueType:(id)arg1 withDescriptor:(id)arg2 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 ;
+(char)implementsSelector:(SEL)arg1 ;
+(char)instancesImplementSelector:(SEL)arg1 ;
+(void)poseAsClass:(Class)arg1 ;
+(void)setVersion:(long long)arg1 ;
+(void)load;
+(long long)version;
+(Class)classForKeyedUnarchiver;
+(id)classFallbacksForKeyedArchiver;
+(char)_shouldAddObservationForwardersForKey:(id)arg1 ;
+(void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2 ;
+(id)_keysForValuesAffectingValueForKey:(id)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(char)accessInstanceVariablesDirectly;
+(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
+(objc_method_description*)instanceMethodDescriptionForSelector:(SEL)arg1 ;
+(const char*)_localClassNameForClass;
+(char)useStoredAccessor;
+(id)__allocWithZone_OA:(NSZone*)arg1 ;
+(id)_copyDescription;
+(id)init;
+(void)finalize;
+(void)dealloc;
+(id)description;
+(void)load;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(char)resolveClassMethod:(SEL)arg1 ;
+(char)isAncestorOfObject:(id)arg1 ;
+(id)init;
+(id)alloc;
+(oneway void)release;
+(id)retain;
+(id)autorelease;
+(void)finalize;
+(void)dealloc;
+(char)respondsToSelector:(SEL)arg1 ;
+(id)description;
+(Class)class;
+(char)isKindOfClass:(Class)arg1 ;
+(id)copy;
+(id)mutableCopy;
+(char)isEqual:(id)arg1 ;
+(id)self;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(char)isProxy;
+(char)isMemberOfClass:(Class)arg1 ;
+(char)conformsToProtocol:(id)arg1 ;
+(unsigned long long)retainCount;
+(NSZone*)zone;
+(unsigned long long)hash;
+(Class)superclass;
+(id)debugDescription;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)new;
+(id)copyWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(void)load;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(char)allowsWeakReference;
+(char)retainWeakReference;
+(char)_tryRetain;
+(char)_isDeallocating;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(char)isSubclassOfClass:(Class)arg1 ;
+(char)isFault;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)libraryID;
-(id)descriptionNoPasswords;
-(id)_ivarDumpCoreShowingPasswords:(char)arg1 ;
-(id)_ivarDump;
-(id)_ivarDumpNoPasswords;
-(id)_webkit_invokeOnMainThread;
-(char)abCaseInsensitiveIsEqual:(id)arg1 ;
-(id)abDictionaryWithValuesForKeyPaths:(id)arg1 ;
-(void)abRemoveObserverIgnoringExceptions:(id)arg1 forKeyPath:(id)arg2 ;
-(char)__canBecomeCNZombie;
-(void)__saveCNZombieRRStacks;
-(void)__gatherCNZombieRRStack;
-(char)__becomeACNZombie;
-(long long)_abCompare:(id)arg1 ascending:(char)arg2 options:(unsigned long long)arg3 ;
-(char)_abCompareContainsSubString:(id)arg1 options:(unsigned long long)arg2 ;
-(char)_abComparePrefixMatch:(id)arg1 options:(unsigned long long)arg2 ;
-(char)_abCompareSuffixMatch:(id)arg1 options:(unsigned long long)arg2 ;
-(char)_abCompareWithinIntervalAroundToday:(id)arg1 ;
-(char)_abCompareWithinIntervalAroundTodayYearless:(id)arg1 ;
-(char)_abCompareNotWithinIntervalAroundToday:(id)arg1 ;
-(char)_abCompareNotWithinIntervalAroundTodayYearless:(id)arg1 ;
-(char)_abCompareWithinIntervalFromToday:(id)arg1 ;
-(char)_abCompareWithinIntervalFromTodayYearless:(id)arg1 ;
-(char)_abCompareNotWithinIntervalFromToday:(id)arg1 ;
-(char)_abCompareNotWithinIntervalFromTodayYearless:(id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)CKDescription;
-(id)CKPropertiesDescription;
-(id)_viewIdentifier;
-(id)IKImageRepresentationWithType:(id)arg1 ;
-(id)imageTitle;
-(id)imageSubtitle;
-(id)imageToDrawForCell:(id)arg1 ;
-(void)imageBrowser:(id)arg1 willDisplayCellsAtIndexes:(id)arg2 ;
-(void)imageBrowser:(id)arg1 didValidateVisibleCellsAtIndexes:(id)arg2 ;
-(id)ikInMainLoopWait:(char)arg1 ;
-(char)shouldColorMatch;
-(id)supportedBufferPixelFormats;
-(char)renderToBuffer:(void*)arg1 withBytesPerRow:(unsigned long long)arg2 pixelFormat:(id)arg3 forBounds:(CGRect)arg4 ;
-(id)supportedRenderedTexturePixelFormats;
-(unsigned)copyRenderedTextureForCGLContext:(CGLContextObject*)arg1 pixelFormat:(id)arg2 bounds:(CGRect)arg3 isFlipped:(char*)arg4 ;
-(void)releaseRenderedTexture:(unsigned)arg1 forCGLContext:(CGLContextObject*)arg2 ;
-(char)canRenderWithCGLContext:(CGLContextObject*)arg1 ;
-(char)renderWithCGLContext:(CGLContextObject*)arg1 forBounds:(CGRect)arg2 ;
-(void)compositionPickerViewDidStartAnimating:(id)arg1 ;
-(void)compositionPickerViewWillStopAnimating:(id)arg1 ;
-(void)compositionPickerView:(id)arg1 willSelectComposition:(id)arg2 ;
-(void)compositionPickerView:(id)arg1 didSelectComposition:(id)arg2 ;
-(void)compositionPickerView:(id)arg1 didLoadComposition:(id)arg2 ;
-(char)compositionPickerView:(id)arg1 keyDown:(id)arg2 ;
-(unsigned long long)compositionPickerView:(id)arg1 draggingEnteredComposition:(id)arg2 sender:(id)arg3 ;
-(char)compositionPickerView:(id)arg1 performDragOperationOnComposition:(id)arg2 sender:(id)arg3 ;
-(void)compositionParameterView:(id)arg1 didChangeParameterWithKey:(id)arg2 ;
-(char)compositionParameterView:(id)arg1 shouldDisplayParameterWithKey:(id)arg2 attributes:(id)arg3 ;
-(id)createImageWithOptions:(id)arg1 ;
-(id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(CGRect)arg2 ;
-(id)resolveForwardingConflictWithPreviousMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)settingsView:(id)arg1 clearSettingForKey:(id)arg2 ;
-(id)settingsView:(id)arg1 settingForKey:(id)arg2 ;
-(char)settingsView:(id)arg1 shouldRenameKey:(id)arg2 ;
-(void)settingsView:(id)arg1 renameKey:(id)arg2 toKey:(id)arg3 ;
-(void)settingsView:(id)arg1 setSetting:(id)arg2 forKey:(id)arg3 ;
-(void)_ql_waitForKey:(id)arg1 toBeEqualTo:(id)arg2 ;
-(char)_ql_waitForKey:(id)arg1 toBeEqualTo:(id)arg2 timeout:(double)arg3 ;
-(id)QTKeyValueProxyTarget_keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)NS_tiledLayerVisibleRect;
-(void)NS_addTiledLayerDescendent:(id)arg1 ;
-(void)NS_removeTiledLayerDescendent:(id)arg1 ;
-(int)accessibilityPresenterProcessIdentifier;
-(void)accessibilitySetPresenterProcessIdentifier:(int)arg1 ;
-(id)accessibilityTemporaryChildren;
-(void)accessibilityAddTemporaryChild:(id)arg1 ;
-(void)accessibilityRemoveTemporaryChild:(id)arg1 ;
-(id)userInterfaceItemIdentifier;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(void)nextSlicePiece:(id)arg1 ;
-(id)_bindingAdaptor;
-(void)_setBindingAdaptor:(id)arg1 ;
-(void)_releaseBindingAdaptor;
-(CGImageRef)NS_copyCGImage;
-(void)awakeFromNib;
-(void)prepareForInterfaceBuilder;
-(void)_addOptionValue:(id)arg1 toArray:(id)arg2 withKey:(id)arg3 type:(unsigned long long)arg4 ;
-(void)_placeSuggestionsInDictionary:(id)arg1 acceptableControllers:(id)arg2 boundBinders:(id)arg3 binder:(id)arg4 binding:(id)arg5 ;
-(void)_addPlaceholderOptionValue:(id)arg1 isDefault:(char)arg2 toArray:(id)arg3 withKey:(id)arg4 binder:(id)arg5 binding:(id)arg6 ;
-(void)_cleanupBindingsWithExistingNibConnectors:(id)arg1 exception:(id)arg2 ;
-(id)_suggestedControllerKeyForController:(id)arg1 binding:(id)arg2 ;
-(id)_bindingInformationWithExistingNibConnectors:(id)arg1 availableControllerChoices:(id)arg2 ;
-(void)_bind:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformerName:(id)arg4 options:(id)arg5 existingNibConnectors:(id)arg6 connectorsToRemove:(id)arg7 connectorsToAdd:(id)arg8 ;
-(void)_unbind:(id)arg1 existingNibConnectors:(id)arg2 connectorsToRemove:(id)arg3 connectorsToAdd:(id)arg4 ;
-(void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbind:(id)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(id)_binderForBinding:(id)arg1 withBinders:(id)arg2 createAutoreleasedInstanceIfNotFound:(char)arg3 ;
-(id)optionDescriptionsForBinding:(id)arg1 ;
-(NSArray *)exposedBindings;
-(Class)_binderClassForBinding:(id)arg1 withBinders:(id)arg2 ;
-(id)_binderWithClass:(Class)arg1 withBinders:(id)arg2 createAutoreleasedInstanceIfNotFound:(char)arg3 ;
-(id)infoForBinding:(id)arg1 ;
-(id)_optionDescriptionsForBinding:(id)arg1 ;
-(char)_isAXConnector;
-(void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(id)_accessibilityUIElementSpecifier;
-(char)accessibilityShouldUseUniqueId;
-(id)_accessibilityUIElementSpecifierRegisterIfNeeded:(char)arg1 ;
-(id)_accessibilityChildUIElementForSpecifierComponent:(long long)arg1 ;
-(long long)_accessibilitySpecifierComponentForChildUIElement:(id)arg1 registerIfNeeded:(char)arg2 ;
-(char)_accessibilityIsTableViewDescendant;
-(id)_accessibilityUIElementSpecifierForChild:(id)arg1 registerIfNeeded:(char)arg2 ;
-(void)accessibilityEncodeOverriddenAttributes:(id)arg1 ;
-(void)accessibilityDecodeOverriddenAttributes:(id)arg1 ;
-(char)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2 ;
-(char)_accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityOverriddenAttributes;
-(char)accessibilitySupportsOverriddenAttributes;
-(char)accessibilityAllowsOverriddenAttributesWhenIgnored;
-(char)accessibilitySupportsNotifications;
-(char)accessibilityShouldSendNotification:(id)arg1 ;
-(id)_accessibilityValueForAttribute:(id)arg1 clientError:(int*)arg2 ;
-(id)_accessibilityAttributeNamesClientError:(int*)arg1 ;
-(char)_accessibilityCanSetValueForAttribute:(id)arg1 clientError:(int*)arg2 ;
-(unsigned long long)_accessibilityIndexOfChild:(id)arg1 clientError:(int*)arg2 ;
-(unsigned long long)_accessibilityArrayAttributeCount:(id)arg1 clientError:(int*)arg2 ;
-(id)_accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 clientError:(int*)arg4 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2 ;
-(id)accessibilityIndexForChildUIElementAttributeForParameter:(id)arg1 ;
-(id)accessibilityAttributedValueForStringAttributeAttributeForParameter:(id)arg1 ;
-(id)__im_afterDelay:(double)arg1 ;
-(id)__im_afterDelay:(double)arg1 modes:(id)arg2 ;
-(id)__im_onThread:(id)arg1 ;
-(id)__im_onThread:(id)arg1 immediateForMatchingThread:(char)arg2 ;
-(id)__im_onMainThread;
-(id)__im_onMainThreadIfNecessary;
-(id)__im_onDetachedThread;
-(id)__im_getInvocation:(id*)arg1 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(char)arg4 ;
-(char)isNull;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)CAMLType;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)CA_prepareRenderValue;
-(CGAffineTransform)CI_affineTransform;
-(CGRect)CI_rect;
-(Class)classForPortCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(char)_scriptingExists;
-(id)classDescriptionForDestinationKey:(id)arg1 ;
-(char)ownsDestinationObjectsForRelationshipKey:(id)arg1 ;
-(id)validateValue:(id*)arg1 forKey:(id)arg2 ;
-(char)isToManyKey:(id)arg1 ;
-(void)removeObject:(id)arg1 fromPropertyWithKey:(id)arg2 ;
-(void)addObject:(id)arg1 toPropertyWithKey:(id)arg2 ;
-(void)_setObject:(id)arg1 forBothSidesOfRelationshipWithKey:(id)arg2 ;
-(id)validateTakeValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObject:(id)arg1 toBothSidesOfRelationshipWithKey:(id)arg2 ;
-(id)allPropertyKeys;
-(void)clearProperties;
-(void)flushKeyBindings;
-(void)removeObject:(id)arg1 fromBothSidesOfRelationshipWithKey:(id)arg2 ;
-(void)takeStoredValuesFromDictionary:(id)arg1 ;
-(id)entityName;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(char)arg4 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(char)arg3 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(char)arg3 modes:(id)arg4 ;
-(void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(char)arg4 modes:(id)arg5 ;
-(char)isLessThanOrEqualTo:(id)arg1 ;
-(char)isGreaterThanOrEqualTo:(id)arg1 ;
-(char)isGreaterThan:(id)arg1 ;
-(char)doesContain:(id)arg1 ;
-(char)isLike:(id)arg1 ;
-(char)isCaseInsensitiveLike:(id)arg1 ;
-(char)isEqualTo:(id)arg1 ;
-(char)isNotEqualTo:(id)arg1 ;
-(char)isLessThan:(id)arg1 ;
-(id)_scriptingSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)objectSpecifier;
-(id)_asScriptTerminologyNameArray;
-(id)_asScriptTerminologyNameString;
-(void)_compatibility_takeValue:(id)arg1 forKey:(id)arg2 ;
-(long long)_supportsGetValueWithNameForKey:(id)arg1 perhapsByOverridingClass:(Class)arg2 ;
-(long long)_supportsGetValueWithUniqueIDForKey:(id)arg1 perhapsByOverridingClass:(Class)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 ;
-(id)valueWithName:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(id)valueWithUniqueID:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)insertValue:(id)arg1 inPropertyWithKey:(id)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3 ;
-(id)coerceValue:(id)arg1 forKey:(id)arg2 ;
-(char)_scriptingMightHandleCommand:(id)arg1 ;
-(char)_scriptingCanHandleCommand:(id)arg1 ;
-(void)_scriptingAddToReceiversArray:(id)arg1 ;
-(unsigned)classCode;
-(NSString *)className;
-(id)_scriptingDebugDescription;
-(int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1 ;
-(id)_scriptingDescriptorOfComplexType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_scriptingDescriptorOfEnumeratorType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_scriptingDescriptorOfObjectType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)_scriptingDescriptorOfValueType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(id)_scriptingSetOfObjectsForSpecifier:(id)arg1 ;
-(id)_scriptingAddObjectsFromSet:(id)arg1 toValueForKey:(id)arg2 ;
-(id)_scriptingArrayOfObjectsForSpecifier:(id)arg1 ;
-(char)_scriptingCanAddObjectsToValueForKey:(id)arg1 ;
-(char)_scriptingCanInsertBeforeOrReplaceObjectsAtIndexes:(id)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingAddObjectsFromArray:(id)arg1 toValueForKey:(id)arg2 ;
-(id)_scriptingReplaceObjectAtIndex:(unsigned long long)arg1 withObjects:(id)arg2 inValueForKey:(id)arg3 ;
-(id)_scriptingInsertObjects:(id)arg1 atIndexes:(id)arg2 inValueForKey:(id)arg3 ;
-(id)_scriptingIndexesOfObjectsForSpecifier:(id)arg1 ;
-(id)_scriptingObjectsAtIndexes:(id)arg1 inValueForKey:(id)arg2 ;
-(unsigned long long)_scriptingObjectCountInValueForKey:(id)arg1 ;
-(id)_scriptingValueForKey:(id)arg1 ;
-(id)_scriptingInsertObject:(id)arg1 inValueForKey:(id)arg2 ;
-(void)_scriptingRemoveAllObjectsFromValueForKey:(id)arg1 ;
-(char)_scriptingCanSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_scriptingSetValue:(id)arg1 forKey:(id)arg2 ;
-(void)_scriptingRemoveObjectsAtIndexes:(id)arg1 fromValueForKey:(id)arg2 ;
-(id)_scriptingObjectWithName:(id)arg1 inValueForKey:(id)arg2 ;
-(unsigned long long)_scriptingIndexOfObjectWithName:(id)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingIndicesOfObjectsAfterValidatingSpecifier:(id)arg1 ;
-(id)_scriptingObjectAtIndex:(unsigned long long)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingCoerceValue:(id)arg1 forKey:(id)arg2 ;
-(char)_scriptingShouldCheckObjectIndexes;
-(unsigned long long)_scriptingIndexOfObjectWithUniqueID:(id)arg1 inValueForKey:(id)arg2 ;
-(unsigned long long)_scriptingIndexOfObjectForSpecifier:(id)arg1 ;
-(id)_scriptingValueForSpecifier:(id)arg1 ;
-(long long*)_scriptingIndicesOfObjectsForSpecifier:(id)arg1 count:(long long*)arg2 ;
-(id)_scriptingObjectWithUniqueID:(id)arg1 inValueForKey:(id)arg2 ;
-(id)_scriptingObjectForSpecifier:(id)arg1 ;
-(void)setScriptingProperties:(NSDictionary *)arg1 ;
-(id)_scriptingCopyWithProperties:(id)arg1 forValueForKey:(id)arg2 ofContainer:(id)arg3 ;
-(id)scriptingValueForSpecifier:(id)arg1 ;
-(NSDictionary *)scriptingProperties;
-(id)coerceValueForScriptingProperties:(id)arg1 ;
-(id)copyScriptingValue:(id)arg1 forKey:(id)arg2 withProperties:(id)arg3 ;
-(id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4 ;
-(id)autoContentAccessingProxy;
-(char)_allowsDirectEncoding;
-(char)implementsSelector:(SEL)arg1 ;
-(Class)classForCoder;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(id)_implicitObservationInfo;
-(void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_willChangeValuesForKeys:(id)arg1 ;
-(void)_didChangeValuesForKeys:(id)arg1 ;
-(void)_changeValueForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2 ;
-(void*)observationInfo;
-(void)setObservationInfo:(void*)arg1 ;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)_removeObserver:(id)arg1 forProperty:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)_isKVOA;
-(id)mutableOrderedSetValueForKeyPath:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(char)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(char)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(char)_conformsToProtocolNamed:(const char*)arg1 ;
-(const char*)_localClassNameForClass;
-(id)handleQueryWithUnboundKey:(id)arg1 ;
-(void)handleTakeValue:(id)arg1 forUnboundKey:(id)arg2 ;
-(id)storedValueForKey:(id)arg1 ;
-(void)takeStoredValue:(id)arg1 forKey:(id)arg2 ;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(void)takeValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_createKeyValueBindingForKey:(id)arg1 name:(const char*)arg2 bindingType:(unsigned long long)arg3 ;
-(id)_oldValueForKeyPath:(id)arg1 ;
-(void)takeValuesFromDictionary:(id)arg1 ;
-(void)unableToSetNilForKey:(id)arg1 ;
-(id)_oldValueForKey:(id)arg1 ;
-(id)keyValueBindingForKey:(id)arg1 typeMask:(unsigned long long)arg2 ;
-(id)createKeyValueBindingForKey:(id)arg1 typeMask:(unsigned long long)arg2 ;
-(id)valuesForKeys:(id)arg1 ;
-(void)_scriptingRemoveValueForSpecifier:(id)arg1 ;
-(unsigned long long)_scriptingCountNonrecursively;
-(unsigned long long)_scriptingCountOfValueForKey:(id)arg1 ;
-(unsigned long long)_scriptingCount;
-(NSClassDescription *)classDescription;
-(NSArray *)attributeKeys;
-(NSArray *)toOneRelationshipKeys;
-(NSArray *)toManyRelationshipKeys;
-(id)inverseForRelationshipKey:(id)arg1 ;
-(id)replacementObjectForArchiver:(id)arg1 ;
-(Class)classForArchiver;
-(unsigned long long)_cfTypeID;
-(char)isNSTimeZone__;
-(char)isNSArray__;
-(char)isNSSet__;
-(char)isNSOrderedSet__;
-(char)isNSDictionary__;
-(char)isNSString__;
-(char)isNSNumber__;
-(char)isNSValue__;
-(char)isNSDate__;
-(char)isNSData__;
-(void)__dealloc_zombie;
-(id)__retain_OA;
-(oneway void)__release_OA;
-(id)__autorelease_OA;
-(char)___tryRetain_OA;
-(id)_copyDescription;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)finalize;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(Class)class;
-(char)isKindOfClass:(Class)arg1 ;
-(id)copy;
-(id)mutableCopy;
-(char)isEqual:(id)arg1 ;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(char)isProxy;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(unsigned long long)retainCount;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(char)allowsWeakReference;
-(char)retainWeakReference;
-(char)_tryRetain;
-(char)_isDeallocating;
-(char)isFault;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

