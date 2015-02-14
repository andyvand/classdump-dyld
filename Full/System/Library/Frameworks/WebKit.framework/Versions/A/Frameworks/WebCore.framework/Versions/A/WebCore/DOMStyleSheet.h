/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode, DOMMediaList;

@interface DOMStyleSheet : DOMObject

@property (copy,readonly) NSString * type; 
@property (assign) char disabled; 
@property (readonly) DOMNode * ownerNode; 
@property (readonly) DOMStyleSheet * parentStyleSheet; 
@property (copy,readonly) NSString * href; 
@property (copy,readonly) NSString * title; 
@property (readonly) DOMMediaList * media; 
-(void)setDisabled:(char)arg1 ;
-(NSString *)href;
-(DOMStyleSheet *)parentStyleSheet;
-(char)disabled;
-(DOMNode *)ownerNode;
-(void)finalize;
-(void)dealloc;
-(NSString *)title;
-(NSString *)type;
-(DOMMediaList *)media;
@end

