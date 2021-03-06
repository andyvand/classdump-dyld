/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MediaLibrary.framework/Versions/A/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MLMediaLibrary, MLMediaGroup, NSArray, NSDictionary, NSData;

@interface MLMediaGroupImpl : NSObject {

	char _mediaObjectsRequested;
	char _iconImageDataRequested;
	MLMediaLibrary* _mediaLibrary;
	MLMediaGroup* _parent;
	NSArray* _childGroups;
	NSArray* _mediaObjects;
	NSDictionary* _attributes;
	NSData* _iconImageData;

}

@property (assign,nonatomic) char mediaObjectsRequested;                 //@synthesize mediaObjectsRequested=_mediaObjectsRequested - In the implementation block
@property (assign,nonatomic) char iconImageDataRequested;                //@synthesize iconImageDataRequested=_iconImageDataRequested - In the implementation block
@property (assign,nonatomic) MLMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,nonatomic) MLMediaGroup * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * childGroups;                      //@synthesize childGroups=_childGroups - In the implementation block
@property (nonatomic,copy) NSArray * mediaObjects;                       //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                    //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSData * iconImageData;                     //@synthesize iconImageData=_iconImageData - In the implementation block
-(NSArray *)childGroups;
-(void)setChildGroups:(NSArray *)arg1 ;
-(NSArray *)mediaObjects;
-(void)setMediaLibrary:(MLMediaLibrary *)arg1 ;
-(MLMediaLibrary *)mediaLibrary;
-(void)setMediaObjectsRequested:(char)arg1 ;
-(void)setIconImageDataRequested:(char)arg1 ;
-(NSData *)iconImageData;
-(char)iconImageDataRequested;
-(void)setIconImageData:(NSData *)arg1 ;
-(char)mediaObjectsRequested;
-(void)setMediaObjects:(NSArray *)arg1 ;
-(void)dealloc;
-(NSDictionary *)attributes;
-(MLMediaGroup *)parent;
-(void)setParent:(MLMediaGroup *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

