/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCRelativePath, BRCLocalItem, BRCServerItem, BRCPackageItem, BRCItemID;

@interface BRCPathToItemLookup : NSObject {

	BRCRelativePath* _pathOfItem;
	BRCRelativePath* _pathInPackage;
	BRCLocalItem* _matchByFileID;
	BRCLocalItem* _matchByDocumentID;
	BRCLocalItem* _matchByPath;
	BRCServerItem* _serverItem;
	BRCServerItem* _serverByPath;
	BRCPackageItem* _packageItem;
	BRCItemID* _parentID;
	SCD_Struct_BR4 _fetched;

}

@property (nonatomic,readonly) BRCRelativePath * relpathOfItem;                 //@synthesize pathOfItem=_pathOfItem - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * relpathInPackage;              //@synthesize pathInPackage=_pathInPackage - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * relpathOfFSEvent; 
@property (nonatomic,readonly) BRCLocalItem * byPath; 
@property (nonatomic,retain) BRCLocalItem * byFileID; 
@property (nonatomic,retain) BRCLocalItem * byDocumentID; 
@property (nonatomic,readonly) BRCServerItem * serverByPath; 
@property (nonatomic,readonly) BRCItemID * parentID; 
@property (nonatomic,readonly) BRCPackageItem * packageItem; 
+(id)lookupForRelativePath:(id)arg1 ;
-(id)initWithRelativePath:(id)arg1 ;
-(char)_fetchByPath;
-(char)_fetchByFileID;
-(char)_fetchByDocumentID;
-(BRCLocalItem *)byPath;
-(BRCRelativePath *)relpathOfFSEvent;
-(void)setByFileID:(BRCLocalItem *)arg1 ;
-(void)setByDocumentID:(BRCLocalItem *)arg1 ;
-(BRCLocalItem *)byFileID;
-(BRCLocalItem *)byDocumentID;
-(id)serverItemFor:(id)arg1 ;
-(BRCServerItem *)serverByPath;
-(BRCPackageItem *)packageItem;
-(BRCRelativePath *)relpathOfItem;
-(BRCRelativePath *)relpathInPackage;
-(BRCItemID *)parentID;
-(id)description;
@end

