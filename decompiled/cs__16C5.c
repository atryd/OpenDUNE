/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16C5_012D_0017_71BC()
 *
 * @name f__16C5_012D_0017_71BC
 * @implements 16C5:012D:0017:71BC ()
 * @implements 16C5:01E7:0004:E839
 * @implements 16C5:01EB:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_012D_0017_71BC()
{
l__012D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x68);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x0144; emu_last_cs = 0x16C5; emu_last_ip = 0x013F; emu_last_length = 0x0017; emu_last_crc = 0x71BC; emu_call(); return; }
	goto l__01E7;
l__01E7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__01EB;
l__01EB:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_0788_0018_4AA5()
 *
 * @name f__16C5_0788_0018_4AA5
 * @implements 16C5:0788:0018:4AA5 ()
 * @implements 16C5:079B:0005:9DB3
 * @implements 16C5:07A0:000D:11BB
 * @implements 16C5:07AD:0025:40DD
 * @implements 16C5:07D2:001B:B10A
 * @implements 16C5:07D6:0017:FF04
 * @implements 16C5:07ED:0006:57AF
 * @implements 16C5:07F3:0015:B1A9
 * @implements 16C5:0808:0002:E1BA
 * @implements 16C5:084D:000E:09AD
 * @implements 16C5:085B:0048:ACCD
 * @implements 16C5:08A3:0016:8B23
 * @implements 16C5:08B9:000B:D46A
 * @implements 16C5:08C4:0018:C08E
 * @implements 16C5:08DC:0019:EFED
 * @implements 16C5:08DF:0016:ABA0
 * @implements 16C5:08F5:0013:98D0
 * @implements 16C5:0908:001E:7ACA
 * @implements 16C5:0917:000F:9BA4
 * @implements 16C5:0926:000A:CB50
 * @implements 16C5:0930:000D:8578
 * @implements 16C5:0935:0008:7900
 * @implements 16C5:093D:000E:0652
 * @implements 16C5:094B:000F:345F
 * @implements 16C5:095A:0008:A673
 * @implements 16C5:095D:0005:BFC0
 * @implements 16C5:0962:000E:B4D2
 * @implements 16C5:0970:0016:8E0F
 * @implements 16C5:0986:0005:8DEE
 * @implements 16C5:0989:0002:C93A
 * @implements 16C5:099D:000B:799F
 * @implements 16C5:09A8:0013:1DE9
 * @implements 16C5:09AA:0011:56DF
 * @implements 16C5:09BB:0003:2397
 * @implements 16C5:09BE:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0788_0018_4AA5()
{
l__0788:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) != 0x0) goto l__07A0;
l__079B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__09BE;
l__07A0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x07AD); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__07AD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x18) == 0x0) goto l__07D6;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x07D2); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__07D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
l__07D6:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__07ED:
	emu_addw(&emu_sp, 0x8);
	goto l__09AA;
l__07F3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__0808;
	goto l__099D;
l__0808:
	goto l__084D;
l__084D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) != 0x0) goto l__085B;
	/* Unresolved jump */ emu_ip = 0x098B; emu_last_cs = 0x16C5; emu_last_ip = 0x0858; emu_last_length = 0x000E; emu_last_crc = 0x09AD; emu_call();
l__085B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) goto l__08C4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x1A)) goto l__08C4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0x0) goto l__08A3;
	goto l__0989;
l__08A3:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x08B9); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__08B9:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__08C4;
	goto l__0989;
l__08C4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x0) goto l__08DF;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x176C; emu_Unit_SetAction();
l__08DC:
	emu_addw(&emu_sp, 0x6);
l__08DF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x08F5); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__08F5:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0908); emu_cs = 0x2537; emu_Tools_RandomRange();
l__0908:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_si = emu_dx;
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_addw(&emu_si, 0x100);
	}
l__0917:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__0926:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0930:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
l__0935:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
l__093D:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__094B;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	goto l__095D;
l__094B:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__095A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
l__095D:
	emu_push(emu_cs); emu_push(0x0962); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__0962:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0970); emu_cs = 0x1A34; emu_Unit_SetDestination();
l__0970:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x1A34; emu_Unit_SetTarget();
l__0986:
	emu_addw(&emu_sp, 0x6);
l__0989:
	goto l__099D;
l__099D:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x09A8); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__09A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__09AA:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__09BB;
	goto l__07F3;
l__09BB:
	goto l__079B;
l__09BE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
