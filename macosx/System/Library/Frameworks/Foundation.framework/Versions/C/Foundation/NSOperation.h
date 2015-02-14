/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperation : NSObject {

	id _private;
	int _private1;
	int _private1b;

}

@property (getter=isCancelled,readonly) char cancelled; 
@property (getter=isExecuting,readonly) char executing; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isConcurrent,readonly) char concurrent; 
@property (getter=isAsynchronous,readonly) char asynchronous; 
@property (getter=isReady,readonly) char ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)currentOperation;
-(char)isReady;
-(id)_activity;
-(char)isExecuting;
-(void)setQueuePriority:(long long)arg1 ;
-(id)_implicitObservationInfo;
-(double)threadPriority;
-(id)__;
-(char)isConcurrent;
-(long long)_effQoS;
-(long long)queuePriority;
-(long long)qualityOfService;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(NSString *)name;
-(void*)observationInfo;
-(char)isCancelled;
-(char)isFinished;
-(void)setCompletionBlock:(id)arg1 ;
-(void)main;
-(void)setObservationInfo:(void*)arg1 ;
-(id)completionBlock;
-(void)addDependency:(id)arg1 ;
-(void)waitUntilFinished;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(NSArray *)dependencies;
-(void)removeDependency:(id)arg1 ;
-(void)setThreadPriority:(double)arg1 ;
-(char)isAsynchronous;
@end

