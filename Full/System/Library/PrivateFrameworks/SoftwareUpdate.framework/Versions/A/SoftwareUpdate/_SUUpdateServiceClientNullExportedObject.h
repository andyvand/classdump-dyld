/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SUUpdateClient.h>

@class NSString;

@interface _SUUpdateServiceClientNullExportedObject : NSObject <SUUpdateClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authChallengeWasReceived:(id)arg1 handled:(char*)arg2 ;
-(void)availableUpdatesDidChange;
-(void)installStateDidChange:(id)arg1 forUpdateWithProductKey:(id)arg2 ;
@end

