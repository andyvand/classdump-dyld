/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramListMapper : CMDiagramShapeMapper {

	float mMaxLineCount;

}
-(CGSize)textSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned)arg2 level:(int)arg3 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setDefaultFonSize;
-(void)mapListItemAt:(id)arg1 index:(int)arg2 withState:(id)arg3 ;
-(id)suggestedBoundsForHListItemWithIndex:(int)arg1 ;
@end
