/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    _MRGameControllerButtonsProtobuf *_buttons;
    unsigned long long _controllerID;
    struct { 
        unsigned int controllerID : 1; 
    } _has;
    _MRGameControllerMotionProtobuf *_motion;
}

@property (nonatomic, retain) _MRGameControllerButtonsProtobuf *buttons;
@property (nonatomic) unsigned long long controllerID;
@property (nonatomic, readonly) BOOL hasButtons;
@property (nonatomic) BOOL hasControllerID;
@property (nonatomic, readonly) BOOL hasMotion;
@property (nonatomic, retain) _MRGameControllerMotionProtobuf *motion;

- (id)buttons;
- (unsigned long long)controllerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasButtons;
- (BOOL)hasControllerID;
- (BOOL)hasMotion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)motion;
- (BOOL)readFrom:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setControllerID:(unsigned long long)arg1;
- (void)setHasControllerID:(BOOL)arg1;
- (void)setMotion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
