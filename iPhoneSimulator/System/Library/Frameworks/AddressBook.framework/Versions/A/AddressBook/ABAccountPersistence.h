/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABAccountPersistenceBackend, CNCancelable;
@class NSString, NSMutableDictionary, ABZeroingWeakReference;

@interface ABAccountPersistence : NSObject {

	id<ABAccountPersistenceBackend> _backend;
	NSString* _accountType;
	char _invalidated;
	id<CNCancelable> _delayedApplyToken;
	char _hasChanges;
	NSMutableDictionary* _persistentValues;
	ABZeroingWeakReference* _delegate;

}

@property (assign) char hasChanges;                                        //@synthesize hasChanges=_hasChanges - In the implementation block
@property (__weak) id<ABAccountPersistenceDelegate> delegate; 
@property (getter=isInvalidated) char invalidated;                         //@synthesize invalidated=_invalidated - In the implementation block
-(id)initWithBackend:(id)arg1 accountType:(id)arg2 ;
-(char)loadPersistentValues;
-(void)setHasChanges:(char)arg1 ;
-(void)deletePersistentValues;
-(void)applyChangesAndRefresh:(char)arg1 ;
-(void)persistValuesAndPostDidChangeNotifcation:(char)arg1 ;
-(char)isInvalidated;
-(void)_sourceShouldRefreshImmediately;
-(char)savePersistentValuesAndPostDidChangeNotification:(char)arg1 ;
-(id)allPersistentValues;
-(id)scheduleDelayedApply;
-(void)setDelayedApplyToken:(id)arg1 ;
-(void)delayedApplyChanges;
-(void)nts_removeObjectForKey:(id)arg1 ;
-(void)nts_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 ;
-(void)applyChanges:(id)arg1 ;
-(void)setInvalidated:(char)arg1 ;
-(void)setDelegate:(id<ABAccountPersistenceDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(char)boolForKey:(id)arg1 ;
-(id<ABAccountPersistenceDelegate>)delegate;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(char)hasChanges;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

