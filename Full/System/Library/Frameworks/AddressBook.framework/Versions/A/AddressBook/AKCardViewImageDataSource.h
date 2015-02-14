/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABCardView, CNContactStore, ABAddressBook, CNContactPhotoStore, NSArray, NSString, ABCardViewImage;

@interface AKCardViewImageDataSource : NSObject {

	ABCardView* _cardView;
	CNContactStore* _addressBook;
	ABAddressBook* _legacyAddressBook;
	CNContactPhotoStore* _thumbnailPhotoStore;
	CNContactPhotoStore* _uncroppedPhotoStore;
	CNContactPhotoStore* _remotePhotoStore;
	NSArray* _alternateImageIDs;
	NSString* _alternateImagePath;
	ABCardViewImage* _updatedImage;

}

@property (copy) NSArray * alternateImageIDs;                   //@synthesize alternateImageIDs=_alternateImageIDs - In the implementation block
@property (copy) NSString * alternateImagePath;                 //@synthesize alternateImagePath=_alternateImagePath - In the implementation block
@property (retain) ABCardViewImage * updatedImage;              //@synthesize updatedImage=_updatedImage - In the implementation block
-(void)setAlternateImageIDs:(NSArray *)arg1 ;
-(NSArray *)alternateImageIDs;
-(void)setAlternateImagePath:(NSString *)arg1 ;
-(NSString *)alternateImagePath;
-(id)initWithAddressBook:(id)arg1 legacyAddressBook:(id)arg2 cardView:(id)arg3 ;
-(ABCardViewImage *)updatedImage;
-(id)localThumbnailPhotoFutureWithPeople:(id)arg1 ;
-(id)localLargePhotoFutureWithPeople:(id)arg1 ;
-(id)remotePhotoFutureWithPeople:(id)arg1 ;
-(id)makeSetImageCommandWithPeople:(id)arg1 image:(id)arg2 shouldSave:(char)arg3 ;
-(id)photoFutureForUpdatedImage;
-(void)setUpdatedImage:(ABCardViewImage *)arg1 ;
-(void)dealloc;
@end

