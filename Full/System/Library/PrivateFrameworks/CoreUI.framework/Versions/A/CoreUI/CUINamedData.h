/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIRenditionKey, NSString, NSData;

@interface CUINamedData : NSObject {

	CUIRenditionKey* _key;
	unsigned long long _storageRef;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * utiType; 
@property (nonatomic,readonly) NSData * data; 
-(id)_rendition;
-(id)_themeStore;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(NSString *)utiType;
-(id)_renditionName;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
@end

