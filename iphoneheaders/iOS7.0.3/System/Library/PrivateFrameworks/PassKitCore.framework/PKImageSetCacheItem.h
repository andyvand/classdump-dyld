/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class PKPassImages, NSMutableSet;

@interface PKImageSetCacheItem : NSObject {

	PKPassImages* _images;
	NSMutableSet* _cardUniqueIDs;

}

@property (nonatomic,retain) PKPassImages * images;                     //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSMutableSet * cardUniqueIDs;              //@synthesize cardUniqueIDs=_cardUniqueIDs - In the implementation block
-(void)dealloc;
-(id)images;
-(void)setImages:(id)arg1 ;
-(id)initWithImages:(id)arg1 cardUniqueID:(id)arg2 ;
-(id)cardUniqueIDs;
-(void)setCardUniqueIDs:(id)arg1 ;
@end
