/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:45:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSString;

@interface PLSFolder : PLSItem {

	NSString* _name;
	NSString* _parentUUID;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentUUID;              //@synthesize parentUUID=_parentUUID - In the implementation block
+(id)folderWithUUID:(id)arg1 ;
+(id)folder;
-(id)parentUUID;
-(void)setParentUUID:(id)arg1 ;
-(id)mergeWithHostPropertyList:(id)arg1 ;
-(id)initWithHostPropertyList:(id)arg1 ;
-(id)initFromPropertyList:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
@end
