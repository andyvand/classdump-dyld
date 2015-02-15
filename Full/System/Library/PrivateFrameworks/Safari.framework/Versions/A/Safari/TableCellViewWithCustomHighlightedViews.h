/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSMapTable;

@interface TableCellViewWithCustomHighlightedViews : NSTableCellView {

	NSMapTable* _attributedStringsForBackgroundStyles;
	NSMapTable* _imagesForBackgroundStyles;

}
-(void)setAttributedString:(id)arg1 forBackgroundStyle:(long long)arg2 ofTextField:(id)arg3 ;
-(void)setImage:(id)arg1 forBackgroundStyle:(long long)arg2 ofImageView:(id)arg3 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)prepareForReuse;
@end

