/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/VMULoadCommand.h>

@class NSString, NSArray;

@interface VMUSegmentLoadCommand : VMULoadCommand {

	NSString* _name;
	unsigned long long _vmaddr;
	unsigned long long _vmsize;
	unsigned long long _fileoff;
	unsigned long long _filesize;
	int _maxprot;
	int _initprot;
	unsigned _flags;
	NSArray* _sections;

}
-(void)dealloc;
-(id)description;
-(id)name;
-(id)sections;
-(unsigned)flags;
-(id)sectionNamed:(id)arg1 ;
-(BOOL)isSegment;
-(unsigned long long)vmaddr;
-(unsigned long long)fileoff;
-(unsigned long long)vmsize;
-(unsigned long long)filesize;
-(int)maxprot;
-(int)initprot;
@end
