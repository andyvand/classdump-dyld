/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSMutableArray, NSMutableDictionary;

@interface NSController : NSObject <NSCoding> {

	int _specialPurposeType;
	id _bindingAdaptor;
	NSMutableArray* _editors;
	NSMutableArray* _declaredKeys;
	NSMutableDictionary* _dependentKeyToModelKeyTable;
	NSMutableDictionary* _modelKeyToDependentKeyTable;
	NSMutableArray* _modelKeysToRefreshEachTime;
	struct {
		unsigned _alwaysPresentsApplicationModalAlerts : 1;
		unsigned _refreshesAllModelKeys : 1;
		unsigned _multipleObservedModelObjects : 1;
		unsigned _isEditing : 1;
		unsigned _reservedController : 28;
	}  _bindingsControllerFlags;
	id _modelObservingTracker;
	id _expectedObservingInfo;
	id _singleValueAccessor;

}

@property (getter=isEditing,readonly) char editing; 
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_nonAutomaticObservingKeys;
+(id)_keyValueBindingAccessPoints;
+(id)_modelAndProxyKeys;
+(Class)_modelObservingTrackerClass;
+(char)_shouldAddObservationForwardersForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_init;
-(char)alwaysPresentsApplicationModalAlerts;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)commitEditing;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(char)_shouldSuppressObserverNotificationFromObject:(id)arg1 keyPath:(id)arg2 ;
-(void)_dealloc;
-(id)_modelAndProxyKeysObserved;
-(void)discardEditing;
-(id)_bindingAdaptor;
-(id)_singleValueForKey:(id)arg1 ;
-(id)_singleValueForKeyPath:(id)arg1 ;
-(char)_validateSingleValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(char)_shouldSendObserverNotificationForModelOrProxyKey:(id)arg1 keyPath:(id)arg2 ofObject:(id)arg3 ;
-(id)_singleValueForKeyPath:(id)arg1 operationType:(long long)arg2 ;
-(id)_singleMutableArrayValueForKey:(id)arg1 ;
-(id)_singleMutableArrayValueForKeyPath:(id)arg1 ;
-(void)_setSingleValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(char)_validateSingleValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)_controllerKeys;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setAlwaysPresentsApplicationModalAlerts:(char)arg1 ;
-(void)_setBindingAdaptor:(id)arg1 ;
-(char)isEditing;
-(char)commitEditingAndReturnError:(id*)arg1 ;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(char)_observesModelObjects;
-(void)_setModelKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2 ;
-(void)_notifyEditorStateChanged:(char)arg1 ;
-(char)_shouldAddObservationForwardersForKey:(id)arg1 ;
-(void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2 ;
-(void)_commonRemoveObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_finishEditingState;
-(void)_controllerEditor:(id)arg1 didCommit:(char)arg2 contextInfo:(id)arg3 ;
-(char)_refreshesAllModelKeys;
-(void)_setDeclaredKeys:(id)arg1 ;
-(id)_declaredKeys;
-(void)_addDeclaredKey:(id)arg1 ;
-(void)_removeDeclaredKey:(id)arg1 ;
-(void)_setSpecialPurposeType:(long long)arg1 ;
-(long long)_specialPurposeType;
-(id)_modelKeysTriggeringChangeNotificationsForDependentKey:(id)arg1 ;
-(void)_setRefreshesAllModelKeys:(char)arg1 ;
@end
