/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>
#import <SAObjects/SADeferredKeyObject.h>

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject>

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assistantUtteranceView;
+(id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(id)deferredKeys;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)text;
-(id)groupIdentifier;
@end

