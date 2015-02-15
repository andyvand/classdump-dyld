/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:55:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Compress Images in PDF Documents.action/Contents/MacOS/Compress Images in PDF Documents
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Compress Images in PDF Documents/Compress Images in PDF Documents-Structs.h>
#import <Automator/AMBundleAction.h>

@interface PMPDFActionCompress : AMBundleAction {

	id* errorSaved;

}
+(char)doesCopyInputFiles;
-(id)createOutputPDFGivenInputURL:(id)arg1 ;
-(id)runWithURL:(id)arg1 ;
-(id)qfilterDict;
-(id)urlToAEDescriptor:(id)arg1 ;
-(id)runWithPDFDocument:(CGPDFDocumentRef)arg1 atURL:(id)arg2 ;
-(id)runWithList:(id)arg1 ;
-(void)processPDFDocument:(CGPDFDocumentRef)arg1 atURL:(id)arg2 toOuput:(id)arg3 ;
-(id)auxInfoDict;
-(id)runWithAlias:(id)arg1 ;
-(id)urlWithAppleEventDescriptor:(id)arg1 ;
-(void)setFatalError:(int)arg1 withMessage:(id)arg2 ;
-(id)moveFile:(id)arg1 toPath:(id)arg2 withDefaultExtension:(id)arg3 ;
-(id)createTempFile:(id)arg1 withExtension:(id)arg2 ;
-(id)renameFile:(id)arg1 toName:(id)arg2 withDefaultExtension:(id)arg3 ;
-(char)destPathUsable:(const char*)arg1 ;
-(id)outputNameSuffix;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
@end

