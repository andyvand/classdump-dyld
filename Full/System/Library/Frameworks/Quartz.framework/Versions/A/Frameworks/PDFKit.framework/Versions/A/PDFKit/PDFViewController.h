/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSComboBoxDataSource.h>
#import <PDFKit/NSFileManagerDelegate.h>

@class PDFViewControllerPrivateVars, NSString;

@interface PDFViewController : NSObject <NSComboBoxDataSource, NSFileManagerDelegate> {

	PDFViewControllerPrivateVars* _pdfPriv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activateNextAnnotation:(char)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)mouseDown:(id)arg1 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)initWithView:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)documentChanged:(id)arg1 ;
-(void)pageChanged:(id)arg1 ;
-(char)shouldBeginDrag:(id)arg1 ;
-(CGRect)marqueeBoundsForPage:(id)arg1 ;
-(void)annotationHit:(id)arg1 ;
-(void)startEditingTextWidgetAnnotation:(id)arg1 ;
-(void)stopEditingAnnotation;
-(id)annotationEditing;
-(id)annotationControl;
-(void)popupClosing:(id)arg1 ;
-(void)documentViewResized:(id)arg1 ;
-(void)formChanged:(id)arg1 ;
-(void)removeAnnotationControl;
-(void)pushTextWidgetUndo;
-(void)addAnnotationControl:(id)arg1 ;
-(void)trackMouse:(id)arg1 forAnnotation:(id)arg2 ;
-(void)choiceMenu:(id)arg1 ;
-(void)trackMarqueeTextSelection:(id)arg1 ;
-(char)dragSelectionWithEvent:(id)arg1 ;
-(void)trackStandardTextSelection:(id)arg1 ;
-(void)handleButtonHit:(id)arg1 ;
-(void)doButtonHit:(id)arg1 ;
-(int)recursivelyPerformNextActions:(id)arg1 index:(int)arg2 count:(int)arg3 ;
-(void)doTextEntered:(id)arg1 ;
-(id)userControlForAnnotation:(id)arg1 ;
-(id)viewToAddForAnnotation:(id)arg1 ;
-(void)syncTableViewToChoiceAnnotation;
-(id)annotationPreceding:(id)arg1 wrapAround:(char)arg2 ;
-(id)annotationFollowing:(id)arg1 wrapAround:(char)arg2 ;
@end

