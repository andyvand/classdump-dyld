/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@interface PDFBaseLayer : CALayer {

	unsigned _repaintCount;
	int _layerType;

}
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned)incrementRepaintCount;
-(unsigned)repaintCount;
@end

