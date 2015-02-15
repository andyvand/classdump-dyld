/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/nsurlsessiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nsurlsessiond/NDApplication.h>
#import <nsurlsessiond/BRContainerObserver.h>

@class BRContainersMonitor, NSString;

@interface NDCloudContainer : NDApplication <BRContainerObserver> {

	BRContainersMonitor* _monitor;
	char _isForeground;
	char _initializedForegroundState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(char)supportsWakes;
-(char)hasForegroundBackgroundStates;
-(char)wakeForSessionIdentifier:(id)arg1 ;
-(void)containerDidEnterForeground:(id)arg1 ;
-(void)containerDidEnterBackground:(id)arg1 ;
-(char)isForeground;
-(void)removeObserver:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
