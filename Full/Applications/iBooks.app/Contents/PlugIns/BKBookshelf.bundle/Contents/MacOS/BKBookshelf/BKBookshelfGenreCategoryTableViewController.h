/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelfCategoryFilterViewController.h>

@class NSArrayController;

@interface BKBookshelfGenreCategoryTableViewController : BKBookshelfCategoryFilterViewController {

	char _hasUncategorizedAssets;
	NSArrayController* _genresArrayController;
	NSArrayController* _arrayController;

}

@property (nonatomic,retain) NSArrayController * genresArrayController;              //@synthesize genresArrayController=_genresArrayController - In the implementation block
@property (nonatomic,retain) NSArrayController * arrayController;                    //@synthesize arrayController=_arrayController - In the implementation block
@property (assign,nonatomic) char hasUncategorizedAssets;                            //@synthesize hasUncategorizedAssets=_hasUncategorizedAssets - In the implementation block
-(void)setArrayController:(NSArrayController *)arg1 ;
-(NSArrayController *)arrayController;
-(NSArrayController *)genresArrayController;
-(char)hasUncategorizedAssets;
-(void)setHasUncategorizedAssets:(char)arg1 ;
-(void)setGenresArrayController:(NSArrayController *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)awakeFromNib;
@end

