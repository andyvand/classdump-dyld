/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * anchors; 
+(id)getAnchorsResponse;
+(id)getAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)anchors;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setAnchors:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

