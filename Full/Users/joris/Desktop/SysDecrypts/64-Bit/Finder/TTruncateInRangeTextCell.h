/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TMarginedTextCell.h>

@interface TTruncateInRangeTextCell : TMarginedTextCell {

	NSRange _truncateInRange;

}

@property (assign,nonatomic) NSRange truncateInRange;              //@synthesize truncateInRange=_truncateInRange - In the implementation block
-(void)setTruncateInRange:(NSRange)arg1 ;
-(NSRange)truncateInRange;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end
