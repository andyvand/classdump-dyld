/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSPDFDocument : NSObject {

	CGPDFDocumentRef _document;
	CGRect _bounds;
	long long _currentPage;

}
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithData:(id)arg1 ;
-(long long)pageCount;
-(CGPDFDocumentRef)documentRef;
-(long long)currentPage;
-(void)setCurrentPage:(long long)arg1 ;
@end

