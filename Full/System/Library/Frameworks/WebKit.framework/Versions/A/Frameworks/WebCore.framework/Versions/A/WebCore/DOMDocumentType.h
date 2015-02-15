/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class NSString, DOMNamedNodeMap;

@interface DOMDocumentType : DOMNode

@property (copy,readonly) NSString * name; 
@property (readonly) DOMNamedNodeMap * entities; 
@property (readonly) DOMNamedNodeMap * notations; 
@property (copy,readonly) NSString * publicId; 
@property (copy,readonly) NSString * systemId; 
@property (copy,readonly) NSString * internalSubset; 
-(DOMNamedNodeMap *)entities;
-(DOMNamedNodeMap *)notations;
-(NSString *)publicId;
-(NSString *)systemId;
-(NSString *)internalSubset;
-(NSString *)name;
-(void)remove;
@end

