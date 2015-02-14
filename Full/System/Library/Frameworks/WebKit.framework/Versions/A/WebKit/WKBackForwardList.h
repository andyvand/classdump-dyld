/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class WKBackForwardListItem, NSArray, NSString;

@interface WKBackForwardList : NSObject <WKObject> {

	ObjectStorage<WebKit::WebBackForwardList> _list;

}

@property (nonatomic,readonly) WKBackForwardListItem * currentItem; 
@property (nonatomic,readonly) WKBackForwardListItem * backItem; 
@property (nonatomic,readonly) WKBackForwardListItem * forwardItem; 
@property (nonatomic,copy,readonly) NSArray * backList; 
@property (nonatomic,copy,readonly) NSArray * forwardList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(WKBackForwardListItem *)currentItem;
-(void)_removeAllItems;
-(Object*)_apiObject;
-(WKBackForwardListItem *)backItem;
-(WKBackForwardListItem *)forwardItem;
-(NSArray *)backList;
-(NSArray *)forwardList;
-(void)_clear;
-(void)dealloc;
-(id)itemAtIndex:(long long)arg1 ;
@end

