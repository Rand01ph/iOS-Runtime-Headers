/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetUsage : PBCodable <NSCopying> {
    unsigned int _count;
    struct { 
        unsigned int count : 1; 
        unsigned int style : 1; 
    } _has;
    int _style;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCount;
- (BOOL)hasStyle;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(BOOL)arg1;
- (void)setHasStyle:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)writeTo:(id)arg1;

@end
