/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSTextStorage;

@interface NSAttachmentTextStorage : NSTextStorage {

	NSTextStorage* _realTS;

}
-(id)init;
-(void)dealloc;
-(id)url;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)filename;
-(void)setFilename:(id)arg1 ;
-(void)setUrl:(id)arg1 ;
@end

