/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DDHighlightObject;

@interface DDHighlightRangeUpdater2 : NSObject {

	int startOffset;
	int endOffset;
	DDHighlightObject* highlight;

}
-(id)initWithHighlight:(id)arg1 ;
-(void)resetOffsets;
-(void)dealloc;
@end

