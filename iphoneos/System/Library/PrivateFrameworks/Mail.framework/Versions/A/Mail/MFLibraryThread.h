/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCActivityTarget.h>

@class NSMutableArray, MCActivityMonitor, NSMapTable, NSString;

@interface MFLibraryThread : NSObject <MCActivityTarget> {

	NSMutableArray* _requests;
	MCActivityMonitor* _monitor;
	NSMapTable* _storeReqCounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)messagesBeingAddedToStore:(id)arg1 ;
-(void)addMessages:(id)arg1 toStore:(id)arg2 ;
-(char)isAddingMessagesToStore:(id)arg1 ;
-(void)_runThread;
-(void)dealloc;
@end

