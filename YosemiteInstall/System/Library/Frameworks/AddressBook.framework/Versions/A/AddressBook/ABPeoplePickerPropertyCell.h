/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSIndexSet;

@interface ABPeoplePickerPropertyCell : NSTextFieldCell {

	NSIndexSet* _selectedSubrowIndexes;

}

@property (nonatomic,copy) NSIndexSet * selectedSubrowIndexes;              //@synthesize selectedSubrowIndexes=_selectedSubrowIndexes - In the implementation block
+(void)ABPeoplePickerPropertyCell_initializeImages;
-(void)setSelectedSubrowIndexes:(NSIndexSet *)arg1 ;
-(double)heightOfSubrowWithCountOfRows:(long long)arg1 inTableView:(id)arg2 ;
-(NSIndexSet *)selectedSubrowIndexes;
-(void)drawHighlightWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_drawSelection:(CGRect)arg1 selected:(char)arg2 inView:(id)arg3 withRoundedLeftEdges:(int)arg4 ;
-(id)tooltipText;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(void)_drawHighlightWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)initImageCell:(id)arg1 ;
@end
