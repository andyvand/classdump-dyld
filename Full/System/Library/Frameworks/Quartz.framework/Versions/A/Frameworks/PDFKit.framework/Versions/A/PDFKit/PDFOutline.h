/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFOutlinePrivateVars;

@interface PDFOutline : NSObject {

	PDFOutlinePrivateVars* _pdfPriv;

}
-(void)commonInit;
-(unsigned long long)numberOfChildren;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)next;
-(id)previous;
-(id)firstChild;
-(id)lastChild;
-(void)setIsOpen:(char)arg1 ;
-(void)removeChildAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAction:(id)arg1 ;
-(unsigned long long)index;
-(id)action;
-(id)document;
-(void)setLabel:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(char)isOpen;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(id)label;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 parent:(id)arg3 ;
-(CFDictionaryRef)createDictionaryRef;
-(void)invalidateDictionaryRef;
-(char)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addActionToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)lazilyLoadChildren;
-(id)childArray;
-(void)removeFromParent;
-(char)childDictionaryReferencesParent:(CGPDFDictionaryRef)arg1 ;
-(int)openDescendantCount;
-(CGPDFDictionaryRef)srcDictionaryRef;
@end

