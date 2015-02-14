/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCMeshPort.h>
#import <QuartzComposer/QCOpenGLPort.h>

@class QCMesh, QCArray, QCImagePort_Cache;

@interface QCOpenGLPort_Mesh : QCMeshPort <QCOpenGLPort> {

	QCMesh* _savedMesh;
	QCArray* _vertices;
	QCArray* _colors;
	QCArray* _normals;
	QCArray* _indices;
	QCArray* _texCoords;
	SCD_Struct_QC19* _saveVertexState;
	SCD_Struct_QC19* _saveColorState;
	SCD_Struct_QC19* _saveNormalState;
	SCD_Struct_QC19* _saveTexCoordState;
	SCD_Struct_QC19* _saveIndexState;
	QCImagePort_Cache* _texturePort[16];
	int _saveLineSmoothHint;
	int _sourceFunction;
	int _destFunction;
	unsigned char _saveLineSmoothEnabled;
	unsigned char _saveBlendingEnabled;
	void** _unused6[4];

}
-(void)dealloc;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(void)setOnOpenGLContext:(id)arg1 ;
-(void)unsetOnOpenGLContext:(id)arg1 ;
-(void)setRawValue:(id)arg1 ;
@end

