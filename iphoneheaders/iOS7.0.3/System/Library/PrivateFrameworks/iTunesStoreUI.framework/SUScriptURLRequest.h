/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSMutableURLRequestProperties, NSNumber, NSString;

@interface SUScriptURLRequest : SUScriptObject {

	SSMutableURLRequestProperties* _requestProperties;

}

@property (copy) NSNumber * timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (copy) id URLs; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)timeoutInterval;
-(void)setTimeoutInterval:(id)arg1 ;
-(void)setURLBagKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)URLBagKey;
-(id)initWithNativeRequestProperties:(id)arg1 ;
-(id)copyNativeRequestProperties;
@end
