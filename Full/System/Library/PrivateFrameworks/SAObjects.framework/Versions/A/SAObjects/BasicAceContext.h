/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceContext.h>

@class NSMutableDictionary, NSString;

@interface BasicAceContext : NSObject <AceContext> {

	NSMutableDictionary* _groupMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBasicAceContext;
-(Class)classWithClassName:(id)arg1 group:(id)arg2 ;
-(id)aceObjectWithDictionary:(id)arg1 ;
-(void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

