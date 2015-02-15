/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SmartFolderItem : NSObject {

	id _item;
	NSString* _displayName;
	id _sortingAttribute;
	char _isSortingAttributeDate;

}

@property (nonatomic,readonly) id item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(id)initWithItem:(id)arg1 sortAttribute:(id)arg2 ;
-(id)description;
-(NSURL *)url;
-(long long)compare:(id)arg1 ;
-(NSString *)displayName;
-(id)item;
-(char)update:(id)arg1 ;
@end
