/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, CPReadingModel, NSMutableArray;

@interface PDFAccessibilityListModel : NSObject {

	id _pdfView;
	PDFPage* _pdfPage;
	id _parent;
	CPReadingModel* _readingModel;
	int _index;
	int _listIndex;
	int _childIndex;
	NSMutableArray* _children;

}
-(id)pdfView;
-(void)dealloc;
-(CGRect)bounds;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(unsigned long long)index;
-(id)parent;
-(id)pdfPage;
-(id)rmList;
-(id)initWithReadingModel:(id)arg1 andView:(id)arg2 andParent:(id)arg3 andListIndex:(int)arg4 andIndex:(int)arg5 ;
@end

