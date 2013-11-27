/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CPPowerAssertionManagerDelegate;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCountedSet, NSMutableDictionary, NSMutableSet, ;

@interface CPPowerAssertionManager : NSObject {

	NSString* _uuid;
	NSCountedSet* _contexts;
	NSMutableDictionary* _groupIdentifierToContexts;
	CFDictionaryRef _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	<CPPowerAssertionManagerDelegate>* _delegate;

}

@property (readonly) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign) <CPPowerAssertionManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2 ;
-(void)_retainAssertions;
-(void)_releaseAssertions;
-(unsigned)retainCountForContext:(id)arg1 ;
-(void)setUUIDPrefix:(id)arg1 ;
-(void)retainPowerAssertionWithContext:(id)arg1 ;
-(void)releasePowerAssertionWithContext:(id)arg1 ;
-(void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)reretainPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(id)uuid;
@end
