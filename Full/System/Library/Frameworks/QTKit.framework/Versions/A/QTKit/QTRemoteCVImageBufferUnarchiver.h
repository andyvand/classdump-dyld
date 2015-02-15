/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTOpenGLContext;

@interface QTRemoteCVImageBufferUnarchiver : NSObject {

	CVOpenGLBufferPoolRef _openGLBufferPool;
	QTOpenGLContext* _openGLContext;

}
-(CVBufferRef)createCVImageBufferFromCVPixelBufferDescription:(const SCD_Struct_QT68*)arg1 attachmentsData:(void*)arg2 attachmentsDataSize:(unsigned long long)arg3 planeDescriptions:(SCD_Struct_QT69*)arg4 planeDescriptionsCount:(unsigned long long)arg5 bufferData:(void*)arg6 bufferDataSize:(unsigned long long)arg7 releasePlanarBytesCallback:(/*function pointer*/void*)arg8 releaseRefCon:(void*)arg9 ;
-(CVBufferRef)createCVImageBufferFromCVPixelBufferDescription:(const SCD_Struct_QT68*)arg1 attachmentsData:(void*)arg2 attachmentsDataSize:(unsigned long long)arg3 bufferData:(void*)arg4 bufferDataSize:(unsigned long long)arg5 releaseBytesCallback:(/*function pointer*/void*)arg6 releaseRefCon:(void*)arg7 ;
-(CVBufferRef)createCVImageBufferFromCVOpenGLBufferDescription:(const SCD_Struct_QT70*)arg1 attachmentsData:(void*)arg2 attachmentsDataSize:(unsigned long long)arg3 ;
-(void)finalize;
-(void)dealloc;
@end

