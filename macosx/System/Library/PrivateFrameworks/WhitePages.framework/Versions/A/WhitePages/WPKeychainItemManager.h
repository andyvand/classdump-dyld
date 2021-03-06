/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WhitePages/WhitePages-Structs.h>
@class NSString;

@interface WPKeychainItemManager : NSObject {

	long long _itemClass;
	NSString* _itemLabel;
	NSString* _itemDescription;
	NSString* _itemAccount;
	NSString* _itemService;
	NSString* _itemPassword;
	OpaqueSecKeychainItemRefRef _itemRef;

}
+(id)itemManagerForClass:(long long)arg1 ;
+(id)defaultGenericPasswordItemManager;
-(id)password;
-(id)itemDescription;
-(void)setItemDescription:(id)arg1 ;
-(long long)itemClass;
-(id)service;
-(void)setService:(id)arg1 ;
-(void)setItemClass:(long long)arg1 ;
-(char)retrieveKeychainItemWithAttributes:(id)arg1 ;
-(char)deleteKeychainItem;
-(char)addKeychainItemWithAttributes:(id)arg1 usingPassword:(id)arg2 ;
-(id)initKeychainItemManagerForClass:(long long)arg1 ;
-(char)modifyKeychainItemPassword:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setPassword:(id)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
@end

