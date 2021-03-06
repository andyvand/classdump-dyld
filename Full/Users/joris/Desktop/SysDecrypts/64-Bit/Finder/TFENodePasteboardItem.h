/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/NSPasteboardReading.h>
#import <Finder/NSPasteboardWriting.h>

@class NSString;

@interface TFENodePasteboardItem : NSObject <NSPasteboardReading, NSPasteboardWriting> {

	TFENode* _node;

}

@property (nonatomic,readonly) const TFENode* node;                 //@synthesize node=_node - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readableTypesForPasteboard:(id)arg1 ;
+(unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)copyURLForType:(id)arg1 ;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(const TFENode*)node;
-(id)initWithNode:(const TFENode*)arg1 ;
@end

