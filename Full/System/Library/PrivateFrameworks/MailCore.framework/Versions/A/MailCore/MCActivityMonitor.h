/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/NSMachPortDelegate.h>

@protocol MCActivityTarget;
@class NSString, NSMutableSet, NSMachPort, NSInvocation, MCError;

@interface MCActivityMonitor : NSObject <NSMachPortDelegate> {

	NSString* _taskName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	NSMutableSet* _subMonitors;
	NSMachPort* _cancelPort;
	id _delegate;
	id<MCActivityTarget> _target;
	double _doneValue;
	double _previousDoneness;
	double _itemValue;
	double _itemMaxValue;
	double _startTime;
	double _itemLastNotifiedTime;
	double _percentDone;
	long long _shouldUnifyDoneness;
	long long _currentProgressStage;
	long long _numberOfProgressStages;
	long long _key;
	unsigned long long _itemsDone;
	unsigned long long _itemsTotal;
	unsigned long long _itemFudgeFactor;
	int _changeCount;
	long long _activityType;
	unsigned char _priority;
	char _canCancel;
	char _shouldCancel;
	char _isActive;
	char _isProgressing;
	char _shouldPromptUserOnTermination;
	NSInvocation* _cancelInvocation;
	NSString* _itemDescription;
	double _itemMinValue;
	MCError* _error;

}

@property (assign,nonatomic) char canBeCancelled; 
@property (assign,nonatomic) char shouldCancel; 
@property (retain) NSInvocation * cancelInvocation;                      //@synthesize cancelInvocation=_cancelInvocation - In the implementation block
@property (copy) NSString * itemDescription;                             //@synthesize itemDescription=_itemDescription - In the implementation block
@property (assign,nonatomic) char isProgressing; 
@property (assign,nonatomic) unsigned long long itemsDone; 
@property (assign,nonatomic) unsigned long long itemsTotal; 
@property (assign,nonatomic) double itemValue; 
@property (assign,nonatomic) double itemMinValue;                        //@synthesize itemMinValue=_itemMinValue - In the implementation block
@property (assign,nonatomic) double itemMaxValue; 
@property (assign,nonatomic) double doneValue; 
@property (retain) MCError * error;                                      //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)determinateProgress;
+(char)automaticallyNotifiesObserversOfIsProgressing;
+(char)automaticallyNotifiesObserversOfStatusMessage;
+(char)automaticallyNotifiesObserversOfPercentDone;
+(char)automaticallyNotifiesObserversOfCanBeCancelled;
+(void)setCurrentMonitor:(id)arg1 ;
+(id)currentMonitorIfExists;
+(id)currentMonitor;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(id)statusMessage;
-(char)isProgressing;
-(void)setIsProgressing:(char)arg1 ;
-(void)resetActivityType;
-(double)doneValue;
-(char)canBeCancelled;
-(void)_setCancelPort:(id)arg1 ;
-(id)cancelPort;
-(void)markCompleted:(char)arg1 ;
-(id)activityTarget;
-(id)taskDescriptionString;
-(void)_didChange;
-(NSInvocation *)cancelInvocation;
-(void)setDoneValue:(double)arg1 ;
-(void)setItemMinValue:(double)arg1 ;
-(void)setItemValue:(double)arg1 ;
-(void)updateDoneValue;
-(void)resetItemValue;
-(void)postActivityStarting;
-(void)postActivityFinished;
-(double)unifiedFractionDone;
-(id)activityDescription;
-(id)activityTargets;
-(void)addSubMonitor:(id)arg1 ;
-(void)removeSubMonitor:(id)arg1 ;
-(double)itemMaxValue;
-(double)itemValue;
-(char)shouldPromptUserOnTermination;
-(void)setShouldPromptUserOnTermination;
-(double)itemMinValue;
-(char)shouldCancel;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 ;
-(void)setStatusMessage:(id)arg1 ;
-(void)setCanBeCancelled:(char)arg1 ;
-(void)setCancelInvocation:(NSInvocation *)arg1 ;
-(void)setActivityTarget:(id)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(void)incrementItemsTotal:(unsigned long long)arg1 ;
-(void)incrementItemsDone:(unsigned long long)arg1 ;
-(void)setStatusMessage:(id)arg1 withKey:(long long)arg2 ;
-(void)setItemFudgeFactor:(unsigned long long)arg1 ;
-(void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(long long)arg3 ;
-(id)taskName;
-(void)setTaskName:(id)arg1 ;
-(long long)acquireExclusiveAccessKey;
-(void)relinquishExclusiveAccessKey:(long long)arg1 ;
-(void)setPercentDone:(double)arg1 ;
-(unsigned long long)itemsTotal;
-(void)setItemsTotal:(unsigned long long)arg1 ;
-(void)setItemMaxValue:(double)arg1 ;
-(void)setShouldCancel:(char)arg1 ;
-(void)addActivityTarget:(id)arg1 ;
-(void)removeActivityTarget:(id)arg1 ;
-(void)setPrimaryTarget:(id)arg1 ;
-(void)setItemIndeterminateValue;
-(void)setItemsDone:(unsigned long long)arg1 ;
-(unsigned long long)itemsDone;
-(void)incrementItemValue:(double)arg1 ;
-(void)setPercentDone:(double)arg1 withKey:(long long)arg2 ;
-(void)beginProgressFor:(long long)arg1 ;
-(double)percentDone;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(char)isActive;
-(void)cancel;
-(void)setPriority:(unsigned char)arg1 ;
-(unsigned char)priority;
-(long long)activityType;
-(MCError *)error;
-(void)setError:(MCError *)arg1 ;
-(void)setItem:(id)arg1 ;
-(int)changeCount;
-(void)handlePortMessage:(id)arg1 ;
@end
