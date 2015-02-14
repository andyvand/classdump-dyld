/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelf-Structs.h>
#import <AppKit/NSTableHeaderCell.h>

@interface BKBookshelfCategoryListTableHeaderCell : NSTableHeaderCell {

	char _hidesSortIndicator;
	long long _padding;

}

@property (assign,nonatomic) char hidesSortIndicator;              //@synthesize hidesSortIndicator=_hidesSortIndicator - In the implementation block
@property (assign,nonatomic) long long padding;                    //@synthesize padding=_padding - In the implementation block
-(void)setHidesSortIndicator:(char)arg1 ;
-(char)hidesSortIndicator;
-(long long)padding;
-(void)setPadding:(long long)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)sortIndicatorRectForBounds:(CGRect)arg1 ;
@end

