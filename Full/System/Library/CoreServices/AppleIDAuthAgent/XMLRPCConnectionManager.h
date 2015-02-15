/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleIDAuthAgent/AppleIDAuthAgent-Structs.h>
@class NSMutableDictionary;

@interface XMLRPCConnectionManager : NSObject {

	NSMutableDictionary* myConnections;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)closeConnectionForIdentifier:(id)arg1 ;
-(id)connectionForIdentifier:(id)arg1 ;
-(void)closeConnections;
-(id)spawnConnectionWithXMLRPCRequest:(id)arg1 delegate:(id)arg2 ;
-(id)activeConnectionIdentifiers;
-(long long)numberOfActiveConnections;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

