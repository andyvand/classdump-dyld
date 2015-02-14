/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSPPDParse : NSObject {

	SCD_Struct_NS64 inputStreamStack[17];
	SCD_Struct_NS65* input;
	id delegate;
	SCD_Struct_NS66 argBuf;
	SCD_Struct_NS66 keyTran;
	SCD_Struct_NS66 argTran;

}
+(id)typeToUnixName:(id)arg1 ;
+(id)findPPDFileName:(id)arg1 ;
+(id)unixToTypeName:(id)arg1 ;
+(id)availablePPDTypeFiles;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
-(id)run;
-(id)openInclude:(id)arg1 ;
-(id)startInputStream:(id)arg1 ;
-(id)endInputStream;
-(id)growBuffer:(SCD_Struct_NS66*)arg1 current:(char**)arg2 end:(char**)arg3 factor:(float)arg4 ;
-(id)processKeyword:(char*)arg1 option:(char*)arg2 keyTran:(char*)arg3 arg:(char*)arg4 argTran:(char*)arg5 quotedArg:(char)arg6 ;
-(char)parseKey:(char)arg1 ;
-(id)parseStream;
-(char)getMoreInput;
-(id)readFromFile:(id)arg1 ;
@end

