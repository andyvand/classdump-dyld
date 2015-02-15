/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelfCategory.h>

@class BKCollection;

@interface BKBookshelfCollectionCategory : BKBookshelfCategory {

	BKCollection* _collection;

}

@property (nonatomic,retain) BKCollection * collection;              //@synthesize collection=_collection - In the implementation block
-(char)canDeleteLibraryAsset:(id)arg1 ;
-(char)deleteRemovesFromCollection;
-(char)allowSortManual;
-(id)contentPredicate;
-(char)deletesExhaustively;
-(BKCollection *)collection;
-(void)setCollection:(BKCollection *)arg1 ;
@end
