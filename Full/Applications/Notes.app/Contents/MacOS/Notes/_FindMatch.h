/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:43:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Notes.app/Contents/MacOS/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PadViewFindController, DOMRange, NSView, NSArray;

@interface _FindMatch : NSObject {

	PadViewFindController* _findController;
	DOMRange* _domRange;
	NSView* _containingView;
	NSArray* _rawTextRects;

}

@property (nonatomic,retain) NSArray * rawTextRects;                                     //@synthesize rawTextRects=_rawTextRects - In the implementation block
@property (nonatomic,retain) DOMRange * domRange;                                        //@synthesize domRange=_domRange - In the implementation block
@property (nonatomic,retain) NSView * containingView;                                    //@synthesize containingView=_containingView - In the implementation block
@property (assign,nonatomic,__weak) PadViewFindController * findController;              //@synthesize findController=_findController - In the implementation block
-(DOMRange *)domRange;
-(void)setDomRange:(DOMRange *)arg1 ;
-(void)setRawTextRects:(NSArray *)arg1 ;
-(NSArray *)rawTextRects;
-(PadViewFindController *)findController;
-(void)setContainingView:(NSView *)arg1 ;
-(void)setFindController:(PadViewFindController *)arg1 ;
-(id)textRects;
-(NSView *)containingView;
-(void)generateTextImage:(/*^block*/id)arg1 ;
@end
